%option noyywrap
%{
#include <stdio.h>
#include "y.tab.h"
FILE * myFile;
%}
digit [0-9]
letter [A-Za-z_]
Scomment [/][*]
Ecomment [*][/]
Punctuations [:punct:]
Echar [']
Estring ["]
EndOfFile <<EOF>>
%{
int count;
int lineNumber=1;
%}
%%
{Scomment}({letter}|{digit}|" "|"-"|"|"|"\\"|"="|" "|"/"|"^"|"%"|"$"|"#"|"@"|"!"|">"|"<"|"."|"?"|"_"|"+"|"_"|"="|"-"|"]"|"{"|"}"|"]"|":"|";"|"*"|"("|")"|"|"|"&"|"/"|"\\")*{Ecomment} ;
{Scomment}({letter}|{digit}|" "|"/"|"^"|"%"|"$"|"#"|"@"|"!"|">"|"<"|"."|"?"|"_"|"+"|"_"|"="|"-"|"]"|"{"|"}"|"]"|":"|";"|"*"|"("|")"|"|"|"&"|"/"|"\\")* printf("Non Terminated Comment Is Found\n");
\n lineNumber++;
int fprintf(myFile,"int,%s,%d\n",yytext,lineNumber);
; fprintf(myFile,"EndOfStatement,;,%d\n",lineNumber);
, fprintf(myFile,"Comma, , ,%d\n",lineNumber);
[(] fprintf(myFile,"OpeningRoundBracket,(, %d\n",lineNumber);
[)] fprintf(myFile,"ClosingRoundBracket,), %d\n",lineNumber);
[{] fprintf(myFile,"OpeningCurlyBracket,{, %d\n",lineNumber);
[}] fprintf(myFile,"ClosingCurlyBracet,}, %d\n",lineNumber);
(-{digit}+) {fprintf(myFile,"+Integer ,%s, %d\n",yytext,lineNumber);}
(-{digit}+"."{digit}*) {fprintf(myFile,"+IntegerF ,%s, %d\n",yytext,lineNumber);}
[=] fprintf(myFile,"Assign, =, %d\n",lineNumber);
[>] fprintf(myFile,"GREATER, >, %d\n",lineNumber);
">=" fprintf(myFile,"GreaterEqual, >=, %d\n",lineNumber);
"<=" fprintf(myFile,"LesserEqual, <=, %d\n",lineNumber);
[<] fprintf(myFile,"Lesser, <, %d\n",lineNumber);
[!] fprintf(myFile,"Exclamation, !, %d\n",lineNumber);
[&] fprintf(myFile,"Ampersand, &, %d\n",lineNumber);
[|] fprintf(myFile,"VerticalBar, |, %d\n",lineNumber);
[]] fprintf(myFile,"ClosingSquareBrackets, ], %d\n",lineNumber);
[[] fprintf(myFile,"OpeningSquareBrackets, [, %d\n",lineNumber);
[:] fprintf(myFile,"Colon, :, %d\n",lineNumber);
[?] fprintf(myFile,"QuestionMark, ?, %d\n",lineNumber);
[`] fprintf(myFile,"Apostrophe, `, %d\n",lineNumber);
"==" fprintf(myFile,"IsEqualto, ==, %d\n",lineNumber);
"+=" fprintf(myFile,"AddAssign, +=, %d\n",lineNumber);
"-=" fprintf(myFile,"SubAssign, -=, %d\n",lineNumber);
"/=" fprintf(myFile,"DivideAssign, /=, %d\n",lineNumber);
"*=" fprintf(myFile,"MultiplyAssign, *=, %d\n",lineNumber);
"%=" fprintf(myFile,"ModulusAndAssign, %=, %d\n",lineNumber);
"%" fprintf(myFile,"Modulus, %, %d\n",lineNumber);
[/] fprintf(myFile,"Divide, /, %d\n",lineNumber);
[-] fprintf(myFile,"Minus, -, %d\n",lineNumber);
[+] fprintf(myFile,"Plus ,+ , %d\n",lineNumber);
"!=" fprintf(myFile,"IsNotEqualto, ==, %d\n",lineNumber);
"||" fprintf(myFile,"or, or, %d\n",lineNumber);
"&&" fprintf(myFile,"and, and, %d\n",lineNumber);
"if" fprintf(myFile,"if,if,%d\n",lineNumber);
"else" fprintf(myFile,"else,else,%d\n",lineNumber);
"switch" fprintf(myFile,"switch,switch,%d\n",lineNumber);
"while" fprintf(myFile,"while,while,%d\n",lineNumber);
"for" fprintf(myFile,"for,for,%d\n",lineNumber);
"auto" fprintf(myFile,"auto,auto,%d\n",lineNumber);
"break" fprintf(myFile,"break,break,%d\n",lineNumber);
"case" fprintf(myFile,"case,case,%d\n",lineNumber);
"char" fprintf(myFile,"char,char,%d\n",lineNumber);
"const" fprintf(myFile,"const,const,%d\n",lineNumber);
"continue" fprintf(myFile,"continue,continue,%d\n",lineNumber);
"default" fprintf(myFile,"default,default,%d\n",lineNumber);
"do" fprintf(myFile,"do,do,%d\n",lineNumber);
"double" fprintf(myFile,"double,double,%d\n",lineNumber);
"enum" fprintf(myFile,"enum,enum,%d\n",lineNumber);
"extern" fprintf(myFile,"extern,extern,%d\n",lineNumber);
"float" fprintf(myFile,"float,float,%d\n",lineNumber);
"goto" fprintf(myFile,"goto,goto,%d\n",lineNumber);
"long" fprintf(myFile,"long,long,%d\n",lineNumber);
"register" fprintf(myFile,"register,register,%d\n",lineNumber);
"return" fprintf(myFile,"return,return,%d\n",lineNumber);
"short" fprintf(myFile,"short,short,%d\n",lineNumber);
"signed" fprintf(myFile,"signed,signed,%d\n",lineNumber);
"sizeof" fprintf(myFile,"sizeof,sizeof,%d\n",lineNumber);
"static" fprintf(myFile,"static,static,%d\n",lineNumber);
"struct" fprintf(myFile,"struct,struct,%d\n",lineNumber);
"typedef" fprintf(myFile,"typedef,typedef,%d\n",lineNumber);
"union" fprintf(myFile,"union,union,%d\n",lineNumber);
"unsigned" fprintf(myFile,"unsigned,unsigned,%d\n",lineNumber);
"void" fprintf(myFile,"void,void,%d\n",lineNumber);
"volatile" fprintf(myFile,"volatile,volatile,%d\n",lineNumber);
"++" fprintf(myFile,"Increment,++, %d\n",lineNumber);
"--" fprintf(myFile,"Decrement,--, %d\n",lineNumber);
"*" fprintf(myFile,"Multiply,*, %d\n",lineNumber);
"\\" fprintf(myFile,"ForwardSlash,\\, %d\n",lineNumber);
[ \t\n+] ;
{Estring}({letter}|{digit}|{Punctuations}|" "|"-"|"|"|"\\"|"="|" "|"/"|"^"|"%"|"$"|"#"|"@"|"!"|">"|"<"|"."|"?"|"_"|"+"|"_"|"="|"-"|"]"|"{"|"}"|"]"|":"|";"|"*"|"("|")"|"|"|"&"|"/"|"\\"|" "|"-"|"|"|"\\"|"="|%)*{Estring} fprintf(myFile,"String, %s ,%d\n",yytext,lineNumber);
{Estring}({letter}|{digit}|" "|{Punctuations}|" "|"-"|"|"|"\\"|"="|" "|"/"|"^"|"%"|"$"|"#"|"@"|"!"|">"|"<"|"."|"?"|"_"|"+"|"_"|"="|"-"|"]"|"{"|"}"|"]"|":"|";"|"*"|"("|")"|"|"|"&"|"/"|"\\"|\n|" "|"-"|"|"|"\\"|"="|" "|"-"|"|"|"\\"|"="|" "|"/"|"^"|"%"|"$"|"#"|"@"|"!"|">"|"<"|"."|"?"|"_"|"+"|"_"|"="|"-"|"]"|"{"|"}"|"]"|":"|";"|"*"|"("|")"|"|"|"&"|"/"|"\\")*{Estring} fprintf(myFile,"String constant exceeds line\n");++lineNumber;
{Echar}({letter}|{digit}|" "|{Punctuations}|" "|"-"|"|"|"\\"|"="|" "|"/"|"^"|"%"|"$"|"#"|"@"|"!"|">"|"<"|"."|"?"|"_"|"+"|"_"|"="|"-"|"]"|"{"|"}"|"]"|":"|";"|"*"|"("|")"|"|"|"&"|"/"|"\\"|\n){Echar} fprintf(myFile,"Character, %s ,%d\n",yytext,lineNumber);
{Echar}({letter}|{digit}|" "|{Punctuations}|" "|"-"|"|"|"\\"|"="|" "|"/"|"^"|"%"|"$"|"#"|"@"|"!"|">"|"<"|"."|"?"|"_"|"+"|"_"|"="|"-"|"]"|"{"|"}"|"]"|":"|";"|"*"|"("|")"|"|"|"&"|"/"|"\\"){2,}{Echar} fprintf(myFile,"Char constant too long\n");
({digit})+ fprintf(myFile,"Integer ,%s, %d\n",yytext,lineNumber);
{digit}+"."{digit}* fprintf(myFile, "Real,%s,%d\n", yytext,lineNumber);
{letter}({letter}|{digit})* fprintf(myFile,"identifier,%s,%d\n",yytext,lineNumber);
[~|#|@|$]({letter}|{digit}|" "|{Punctuations}|" "|"|"|"\\"|"/"|"^"|"%"|"$"|"#"|"@"|"!"|"."|"?"|"_")*[\n] fprintf(myFile,"Invalid Symbol\n"); lineNumber++;
. fprintf(myFile,"Undefined Symbol\n");
%%
int main ( int argc, char * argv[] )
{

myFile=fopen("Tokens.txt","w");
FILE * pFile;
int c;
int n = 0;
yyin =fopen ("input.c","r");
yylex();
fclose(myFile);
printf("Tokens Have been Generated");
return 0;
}

