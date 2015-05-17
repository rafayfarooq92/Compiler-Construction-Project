%option noyywrap
%{
#include <cstdio>
#include <iostream>
#include <string.h>
using namespace std;
#define YY_DECL extern "C" int yylex()

#include "bison.tab.h"  // to get the token types that we return
int lineNumber=1;
%}
digit [0-9]
letter [A-Za-z_]
Scomment [/][*]
Ecomment [*][/]
Punctuations [:punct:]
Echar [']
Estring ["]
EndOfFile <<EOF>>
%%
[\t]
\n 			{lineNumber++;}
; { return ENDOFSTATEMENT;}
, { return COMMA;}
{Scomment}({letter}|{digit}|" "|"-"|"|"|"\\"|"="|" "|"/"|"^"|"%"|"$"|"#"|"@"|"!"|">"|"<"|"."|"?"|"_"|"+"|"_"|"="|"-"|"]"|"{"|"}"|"]"|":"|";"|"*"|"("|")"|"|"|"&"|"/"|"\\")*{Ecomment} ;
{Scomment}({letter}|{digit}|" "|"/"|"^"|"%"|"$"|"#"|"@"|"!"|">"|"<"|"."|"?"|"_"|"+"|"_"|"="|"-"|"]"|"{"|"}"|"]"|":"|";"|"*"|"("|")"|"|"|"&"|"/"|"\\")* printf("Lexical Error:  Non Terminated Comment Is Found\n");
[(] { fprintf(yyout,"OPENINGROUNDBRACKET,(,%d",lineNumber); return OPENINGROUNDBRACKET;}
[)] { fprintf(yyout,"CLOSINGROUNDBRACKET,),%d",lineNumber);return CLOSINGROUNDBRACKET;}
[{] { fprintf(yyout,"OPENINGCURLYBRACKET,{,%d",lineNumber);return OPENINGCURLYBRACKET;}
[}] { fprintf(yyout,"CLOSINGCURLYBRACKET,},%d",lineNumber);return CLOSINGCURLYBRACKET;}
[]] { fprintf(yyout,"CLOSINGSQUAREBRACKET,],%d",lineNumber);return CLOSINGSQUAREBRACKET;}
[[] { fprintf(yyout,"OPENINGSQUAREBRACKET,[,%d",lineNumber);return OPENINGSQUAREBRACKET;}
(-{digit}+) {  yylval.ival = atoi(yytext); return INTEGER; }
(-{digit}+"."{digit}*) { yylval.fval = atof(yytext); return FLOATPOINT; }
[>] { fprintf(yyout,"GREATERTHAN,>,%d",lineNumber);return GREATERTHAN;}
[<] { fprintf(yyout,"LESSTHAN,<,%d",lineNumber);return LESSTHAN;}
[-] { fprintf(yyout,"SUB,-,%d",lineNumber);return SUB;}
[+] { fprintf(yyout,"ADD,+,%d",lineNumber);return ADD;}
[:] { fprintf(yyout,"COLON,:,%d",lineNumber);return COLON;}
[/] { fprintf(yyout,"DIVIDE,/,%d",lineNumber);return DIVIDE;}
[?] { fprintf(yyout,"CONDITIONALOPERATOR,?,%d",lineNumber);return CONDITIONALOPERATOR;}
"*" { fprintf(yyout,"MULTIPLY,*,%d",lineNumber);return MULTIPLY;}
"==" { fprintf(yyout,"ISEQUALTO,==,%d",lineNumber);return ISEQUALTO;}
"!=" { fprintf(yyout,"ISNOTEQUALTO,!=,%d",lineNumber);return ISNOTEQUALTO;}
">=" { fprintf(yyout,"GREATERTHANEQUAL,>=,%d",lineNumber);return GREATERTHANEQUAL;}
"<=" { fprintf(yyout,"LESSTHANEQUAL,<=,%d",lineNumber);return LESSTHANEQUAL;}
"=" { fprintf(yyout,"ASSIGN,=,%d",lineNumber);return ASSIGN;}
"%" { fprintf(yyout,"MODULUS,%,%d",lineNumber);return MODULUS;}
"%=" { fprintf(yyout,"MODULUSANDASSIGN,%=,%d",lineNumber);return MODULUSANDASSIGN;}
"+=" { fprintf(yyout,"ADDANDASSIGN,+=,%d",lineNumber);return ADDANDASSIGN;}
"-=" { fprintf(yyout,"SUBANDASSIGN,-=,%d",lineNumber);return SUBANDASSIGN;}
"/=" { fprintf(yyout,"DIVIDEANDASSIGN,/=,%d",lineNumber);return DIVIDEANDASSIGN;}
"*=" { fprintf(yyout,"MULTIPLYANDASSIGN,*=,%d",lineNumber);return MULTIPLYANDASSIGN;}
"++" { fprintf(yyout,"INCREAMENT,++,%d",lineNumber);return INCREAMENT;}
"--" { fprintf(yyout,"DECREAMENT,--,%d",lineNumber);return DECREAMENT;}
int { yylval.sval= strdup(yytext); fprintf(yyout,"INT,int,%d",lineNumber); return INT;}
"if" { fprintf(yyout,"IF,if,%d",lineNumber);return IF;}
"else" { fprintf(yyout,"ELSE,else,%d",lineNumber);return ELSE;}
"switch" {fprintf(yyout,"SWITCH,switch,%d",lineNumber); return SWITCH;}
"while" { fprintf(yyout,"WHILE,while,%d",lineNumber);return WHILE;};
"break" {fprintf(yyout,"BREAK,break,%d",lineNumber); return BREAK;}
"case" { fprintf(yyout,"CASE,case,%d",lineNumber);return CASE;}
"for" { fprintf(yyout,"FOR,for,%d",lineNumber);return FOR;}
"do" { fprintf(yyout,"DO,do,%d",lineNumber);return DO;}
"char" { yylval.sval= strdup(yytext);fprintf(yyout,"CHAR,char,%d",lineNumber); return CHAR;}
"continue" {fprintf(yyout,"CONTINUE,continue,%d",lineNumber); return CONTINUE;}
"default" {fprintf(yyout,"DEFAULT,default,%d",lineNumber); return DEFAULT;}
"float" { yylval.sval= strdup(yytext);fprintf(yyout,"FLOAT,float,%d",lineNumber); return FLOAT;}
"return" { fprintf(yyout,"RETURN,return,%d",lineNumber);return RETURN;}
"void" { yylval.sval= strdup(yytext); fprintf(yyout,"VOID,void,%d",lineNumber); return VOID;}
[ \t\n+] ;
{Estring}({letter}|{digit}|{Punctuations}|" "|"-"|"|"|"\\"|"="|" "|"/"|"^"|"%"|"$"|"#"|"@"|"!"|">"|"<"|"."|"?"|"_"|"+"|"_"|"="|"-"|"]"|"{"|"}"|"]"|":"|";"|"*"|"("|")"|"|"|"&"|"/"|"\\"|" "|"-"|"|"|"\\"|"="|%)*{Estring} { yylval.sval= strdup(yytext); fprintf(yyout,"STRING,string,%d",lineNumber); return STRING;}
{Estring}({letter}|{digit}|" "|{Punctuations}|" "|"-"|"|"|"\\"|"="|" "|"/"|"^"|"%"|"$"|"#"|"@"|"!"|">"|"<"|"."|"?"|"_"|"+"|"_"|"="|"-"|"]"|"{"|"}"|"]"|":"|";"|"*"|"("|")"|"|"|"&"|"/"|"\\"|\n|" "|"-"|"|"|"\\"|"="|" "|"-"|"|"|"\\"|"="|" "|"/"|"^"|"%"|"$"|"#"|"@"|"!"|">"|"<"|"."|"?"|"_"|"+"|"_"|"="|"-"|"]"|"{"|"}"|"]"|":"|";"|"*"|"("|")"|"|"|"&"|"/"|"\\")*{Estring} { printf("Lexical Error: String constant exceeds line\n"); ++lineNumber;}
({digit})+ {  yylval.ival = atoi(yytext); return INTEGER; }
{digit}+"."{digit}* { yylval.fval = atof(yytext); return FLOATPOINT; }
{Echar}({letter}|{digit}|" "|{Punctuations}|" "|"-"|"|"|"\\"|"="|" "|"/"|"^"|"%"|"$"|"#"|"@"|"!"|">"|"<"|"."|"?"|"_"|"+"|"_"|"="|"-"|"]"|"{"|"}"|"]"|":"|";"|"*"|"("|")"|"|"|"&"|"/"|"\\"|\n){Echar} { yylval.charval = yytext[1]; return CHARACTER; }
{letter}({letter}|{digit})* {  yylval.sval= strdup(yytext); return IDENTIFIER;}
{Echar}({letter}|{digit}|" "|{Punctuations}|" "|"-"|"|"|"\\"|"="|" "|"/"|"^"|"%"|"$"|"#"|"@"|"!"|">"|"<"|"."|"?"|"_"|"+"|"_"|"="|"-"|"]"|"{"|"}"|"]"|":"|";"|"*"|"("|")"|"|"|"&"|"/"|"\\"){2,}{Echar} printf("Lexical Error: Char constant too long\n");
[~|#|@|$]({letter}|{digit}|" "|{Punctuations}|" "|"|"|"\\"|"/"|"^"|"%"|"$"|"#"|"@"|"!"|"."|"?"|"_")*[\n] printf("Lexical Error: Invalid Symbol\n"); lineNumber++;
. printf("Lexical Error: Undefined Symbol\n");

%%
/*
void yyerror(const char *s) {
	cout << "EEK, parse error on line " << lineNumber << "!  Message: " << yytext <<" :";
	// might as well halt now:
	
}
*/

void yyerror(const char *s)
{
printf("%d: %s at/near %s\n", lineNumber, s, yytext);
}