%{
#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <queue>
#include <cstring>
using namespace std;

// stuff from flex that bison needs to know about:
extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
extern "C" FILE *yyout;
void yyerror(const char *s);
extern int lineNumber;

%}

// Bison fundamentally works by asking flex to get the next token, which it
// returns as an object of type "yystype".  But tokens could be of any
// arbitrary data type!  So we deal with that in Bison by defining a C union
// holding each of the types of tokens that Flex could return, and have Bison
// use that union instead of "int" for the definition of "yystype":
%union {
	int ival;
	float fval;
	char *sval;
	char charval;
	
}
%expect 1
// define the "terminal symbol" token types I'm going to use (in CAPS
// by convention), and associate each with a field of the union:
//%token <ival> INT
//%token <fval> FLOAT
%type  <charval> directdeclarator_a
%type  <sval> constant
%type  <sval> primaryexpression
%type  <sval> unaryexpression
%type  <sval> postfixexpression
%type  <sval> postfixexpression_a
%type  <sval> postfixexpression_b
%type  <sval> relationalexpression
%type  <sval> relationalexpression_a
%type  <sval> additiveexpression
%type  <sval> multiplicativeexpression
%type  <sval> conditionalexpression
%type  <sval> assignmentexpression 
%type  <sval> expression 
%type  <sval> statement 
%type  <sval> statementlist
%type  <sval> statementlist_a

%type  <sval> compoundstatement
%type  <sval> compoundstatement_b
%type  <sval> compoundstatement_a


%type  <sval> expressionstatement 
%type  <sval> selectionstatement 

%type  <sval> jumpstatement 

%type  <sval> jumpstatement_a
%type  <sval> argumentexpressionlist
%type  <sval> argumentexpressionlist_a

%type  <sval> iterationstatement
%type  <sval> equalityexpression
%type  <sval> equalityexpression_a
%type  <sval> additiveexpression_a 
%type  <sval> directdeclarator 
%type  <sval> labeledstatement
%type  <sval> declarator
%type  <sval> typespecifier
%token <sval> STRING
%token <ival> INTEGER
%token <cval> CHARACTER
%token <fval> FLOATPOINT
%token <sval> IDENTIFIER
%token <sval> INT
%token <sval> CHAR
%token <sval> FLOAT
%token <sval> VOID
%token COMMA
%token OPENINGROUNDBRACKET
%token CLOSINGROUNDBRACKET
%token OPENINGCURLYBRACKET
%token CLOSINGCURLYBRACKET
%token CLOSINGSQUAREBRACKET
%token OPENINGSQUAREBRACKET
%token  DEFAULT
%token  WHILE
%token  BREAK
%token  CONTINUE
%token  IF
%token  FOR
%token  SWITCH
%token  RETURN
%token  DO
%token  CASE
%token CONDITIONALOPERATOR
%token MULTIPLY
%token COLON
%token INCREAMENT
%token DECREAMENT
%token GREATERTHAN
%token LESSTHAN
%token GREATERTHANEQUAL
%token ISNOTEQUALTO
%token LESSTHANEQUAL
%token ISEQUALTO
%token ENDOFSTATEMENT
%right THAN ELSE
%left MULTIPLY DIVIDE MODULUS ADD SUB 
%right ASSIGN ADDANDASSIGN SUBANDASSIGN MULTIPLYANDASSIGN DIVIDEANDASSIGN MODULUSANDASSIGN
%{
int size=0;
string scoper="Global";
string prev_scope="Global";
int reported=0;
int iWasHere=0;
int foundedArray=0;
int foundedArrayIndex=0;
int findme=0;
char isFunction=' ';
string myType=" ";
string assignmentOp=" ";
int myArraySize=-1;
bool check=false;
int param=0;
int savedFunction=0;
string theLex=" ";
int go=0;
int iFollowedOtherPath=0;
int justPassedHere=0;
string returnType;



class myClass{
public:
string lexeme;
string type;
string scope;
int arraySize;
string functionName;
int lineNumbers;
int parameterslength;




void initArray()
{
		lexeme=" ";
		type=" ";
		scope=scoper;
		arraySize=-1;
		functionName=" ";
		lineNumbers=lineNumber;
		parameterslength=0;
		
	
}




void printArray(){
		if(arraySize==-1)
		cout<<lexeme<<"\t\t"<<type<<"\t\t"<<scope<<"\t\t"<<" "<<"\t\t"<<functionName<<"\t\t"<<lineNumbers<<endl;
		else
		cout<<lexeme<<"\t\t"<<type<<"\t\t"<<scope<<"\t\t"<<arraySize<<"\t\t"<<functionName<<"\t\t"<<lineNumbers<<endl;
}
};
myClass tabElem[500];




class Stack {
   int MaxStack;
   int EmptyStack;
   int top;
   myClass* items;
public:
   Stack(int);
   ~Stack();
   void push(myClass);
   myClass pop();
   int empty();
   int full();
};
Stack::Stack(int size) {
   MaxStack = size;
   EmptyStack = -1;
   top = EmptyStack;
   items = new myClass[MaxStack];
}

Stack::~Stack() {delete[] items;}

void Stack::push(myClass c) {
   items[++top] = c;
}

myClass Stack::pop() {
   return items[top--];
}

int Stack::full()  {
   return top + 1 == MaxStack;
}

int Stack::empty()  {
   return top == EmptyStack;
}

Stack s(20);



class Queue {
   int MaxStack;
   int EmptyStack;
   int top;
   string* items;
public:
   Queue(int);
   ~Queue();
   void Add(string);
   void Print();
   string Delete();
   int empty();
   int full();
};
Queue::Queue(int size) {
   MaxStack = size;
   EmptyStack = -1;
   top = -1;
   items = new string[MaxStack];
}

Queue::~Queue() {delete[] items;}

void Queue::Add(string item)
{
             if(EmptyStack == MaxStack-1)
            {
                  cout<<endl<< "Queue is full";
                   return;
            }
 
            EmptyStack++;
            items[EmptyStack] = item;
 
             if( top == -1 )
                  top = 0;
}



string Queue::Delete()
{
    if(top == -1)
    {
                  cout<<endl<< "Queue is empty";
                   return NULL;
    }
 
    string data = items[top];
 
    if( top == EmptyStack)
                  top = EmptyStack = -1;
    else
                  top++;
 
        return data;
}
 


int Queue::full()  {
   return top + 1 == MaxStack;
}

int Queue::empty()  {
   return top == EmptyStack;
}

void Queue::Print(){

	for(int i=0;i<=EmptyStack;i++){
		
		cout<<items[i]<<endl;
	}
}

Queue qu(20);







class StackForScope {
   int MaxStack;
   int EmptyStack;
   int top;
   string* items;
public:
   StackForScope(int);
   ~StackForScope();
   void push(string);
   string pop();
   int empty();
   int full();
};
StackForScope::StackForScope(int size) {
   MaxStack = size;
   EmptyStack = -1;
   top = EmptyStack;
   items = new string[MaxStack];
}

StackForScope::~StackForScope() {delete[] items;}

void StackForScope::push(string c) {
   items[++top] = c;
}

string StackForScope::pop() {
   return items[top--];
}

int StackForScope::full()  {
   return top + 1 == MaxStack;
}

int StackForScope::empty()  {
   return top == EmptyStack;
}

StackForScope sc(20);


string findType(int size,string lexeme)
{
	for(int i=0;i<size;i++)
	{
		if(tabElem[i].lexeme==lexeme)
		{
			
			return tabElem[i].type;
		}
	}
	yyerror("The Identifier Was Not Declared.");
	return "void";
}

bool isDecArray(int size,string lexeme)
{
	for(int i=0;i<=size;i++)
	{
		if(tabElem[i].lexeme==lexeme)
		{

			if(tabElem[i].arraySize>=0)
				return true;
			else
				return false;
		}
	}
}




void PrintAll(){
	cout<<"Lexeme"<<"\t	"<<"Type"<<"\t	"<<"Scope"<<"\t	"<<"Array Size"<<"\t"<<"Function"<<"\t"<<"Line Number"<<endl;
	cout<<"------"<<"\t	"<<"----"<<"\t	"<<"-----"<<"\t	"<<"----------"<<"\t"<<"--------"<<"\t"<<"------------"<<endl;
	
	for(int i=0;i<size;i++)
	{
		tabElem[i].printArray();
	}
}

void SetAll(){
	for(int i=0;i<500;i++)
	{
		tabElem[i].initArray();
	}
}
string convertInt(int number)
{
   stringstream ss;//create a stringstream
   ss << number;//add number to the stream
   return ss.str();//return a string with the contents of the stream
}
string convertFloat(float number)
{
   stringstream ss;//create a stringstream
   ss << number;//add number to the stream
   return ss.str();//return a string with the contents of the stream
}
char * conversionConstChar(string type){
		string s1 = type;
		char *s2 = new char[s1.size()+1];
		strcpy(s2, s1.c_str());
		return s2;
}
		
void findFunctionAndGivePara(string lexeme,int size,string *returnType)
{

	for(int i=0;i<size;i++){
		if(tabElem[i].lexeme==lexeme){
			for(int j=i+1;j<=(tabElem[i].parameterslength);j++){
					
				if(tabElem[j].scope==tabElem[i].lexeme ){
					string tk=qu.Delete();
					if(tabElem[j].type!=tk)
					{
						yyerror("The Function parameter type does not match.");
						*returnType="typeerr";
						//string err="typeerr";
						//return "typeerr";
					}
					
					//cout<<tabElem[j].lexeme<<endl;
				}
				
			}
			*returnType=tabElem[i].type;
			
			
		}
	}
}

bool isFunc(int size, string lexeme){
	for(int i=0;i<size;i++){
		if(tabElem[i].lexeme==lexeme){
			return tabElem[i].functionName=="Y";
		}
	}
}

bool findID(int size,string lexeme,string scoper){
	for(int i=0;i<=size;i++)
	{
		if(tabElem[i].lexeme==lexeme && tabElem[i].scope==scoper){
			return true;
		}
	}
	return false;
}

%}



%%
// this is the actual grammar that bison will parse, but for right now it's just
// something silly to echo to the screen what bison gets from flex.  We'll
// make a real one shortly:



transitionunit:
externaldeclaration 
{
	if(!sc.empty())
	scoper=sc.pop();
	//cout<<scoper<<endl;
	
}
 transitionunit_a
;

transitionunit_a:
externaldeclaration 
{
	scoper=sc.pop();
	/*cout<<scoper<<endl;*/
}
 transitionunit_a
|/* empty */
;

externaldeclaration:
functiondefinition 
| declaration ENDOFSTATEMENT
;

functiondefinition:
typespecifier declarator {
sc.push(scoper);
scoper=$2;

myClass e1;
while(!s.empty())
{
	e1=s.pop();
	
	
	tabElem[size].lexeme=e1.lexeme;
	tabElem[size].scope=scoper;
	tabElem[size].type=e1.type;
	tabElem[size].arraySize=e1.arraySize;
	tabElem[size].functionName=e1.functionName;


	tabElem[size].lineNumbers=lineNumber;
	size++;
	
}

} functiondefinition_a
| declarator   functiondefinition_b{
scoper=$1;
}
;

functiondefinition_a:
declarationlist  compoundstatement
| compoundstatement
;


functiondefinition_b:
declarationlist  compoundstatement
| compoundstatement
;

typespecifier:
VOID{
$$=$1;
myType=$1;
}
|CHAR{
$$=$1;
myType=$1;
}
|INT{
$$=$1;
myType=$1;
}
|FLOAT{
$$=$1;
myType=$1;
}
;

declarator:
directdeclarator{
$$=$1;
}
| pointer  directdeclarator{
$$=$2;
}
;



directdeclarator:
IDENTIFIER directdeclarator_a{

string thisLex=$1;
if(findID(size,thisLex,scoper)){
	yyerror("The identifier was already declared.");
}
else{



if(findme!=-1){
tabElem[size].lexeme=$1;
tabElem[size].scope=scoper;
tabElem[size].type=myType;
tabElem[size].arraySize=myArraySize;
tabElem[size].functionName=$2;
if(tabElem[size].functionName=="Y"){
tabElem[size].parameterslength=param;
param=0;
}
myArraySize=-1;
tabElem[size].lineNumbers=lineNumber;
size++;
$$=$1;
}
else if(findme==-1){
//cout<<$1<<" "<<findme<<endl;
myClass temperory;
temperory.lexeme=$1;
temperory.type=myType;
temperory.arraySize=myArraySize;
myArraySize=-1;
temperory.functionName=$2;
temperory.lineNumbers=lineNumber;
s.push(temperory);
param++;

$$=$1;
}

}
}
;


directdeclarator_a:
OPENINGROUNDBRACKET{
 findme=-1;
}
 directdeclarator_b{
$$='Y';
findme=0;
}
|OPENINGSQUAREBRACKET directdeclarator_c{
$$=' ';
}
|/* empty */{
$$=' ';
}
;



directdeclarator_b:
declarator CLOSINGROUNDBRACKET directdeclarator_a
| parameterlist CLOSINGROUNDBRACKET directdeclarator_a 
| parameterlist error directdeclarator_a { yyerror("Closing Bracket Missing");}
|CLOSINGROUNDBRACKET directdeclarator_a
| error directdeclarator_a { yyerror("Closing Bracket Missing");}
;


directdeclarator_c:
CLOSINGSQUAREBRACKET directdeclarator_a {
myArraySize=0;
}
| error directdeclarator_a { yyerror("Closing Square Bracket Missing");}
|INTEGER CLOSINGSQUAREBRACKET directdeclarator_a{
myArraySize=$1;
}
| INTEGER error directdeclarator_a { yyerror("Closing Bracket Missing");}
;


pointer:
MULTIPLY pointer_a
;
pointer_a:
pointer 
|/* empty */ 
;

declarationlist:
declaration  ENDOFSTATEMENT declarationlist_a
| declaration  error declarationlist_a { yyerror("Semicolon Missing");}
;

declarationlist_a:
declaration  ENDOFSTATEMENT declarationlist_a 
|/* empty */ 
;

declaration:
typespecifier  declaration_a
;

declaration_a:
initdeclaratorlist 
|/* empty */ 
;
initdeclaratorlist:
initdeclarator initdeclaratorlist_a 
;

initdeclaratorlist_a:
COMMA initdeclarator initdeclaratorlist_a  
|/* empty */ 
;

initdeclarator:
declarator  initdeclarator_a
;

initdeclarator_a: 
ASSIGN initializer
|/* empty */ 
;

initializer: constant |OPENINGCURLYBRACKET initializerlist CLOSINGCURLYBRACKET | OPENINGCURLYBRACKET initializerlist COMMA CLOSINGCURLYBRACKET; 
initializerlist: initializer | initializerlist COMMA initializer ; 



parameterlist:
parameterdeclaration parameterlist_a
;
parameterlist_a:
COMMA parameterdeclaration parameterlist_a
|/* empty */
;

parameterdeclaration:
typespecifier  parameterdeclaration_a
;

parameterdeclaration_a  : declarator
|/* empty */ 
;



compoundstatement:OPENINGCURLYBRACKET compoundstatement_a {
	$$=$2;
}
;
compoundstatement_a: CLOSINGCURLYBRACKET
{
	$$=conversionConstChar("void");
}
|statementlist CLOSINGCURLYBRACKET
{
	$$=$1;
}
|declarationlist compoundstatement_b
{
	$$=$2;
}
;
compoundstatement_b:
statementlist CLOSINGCURLYBRACKET
{
	$$=$1;
}
|CLOSINGCURLYBRACKET
{
	$$=conversionConstChar("void");
}
;

statementlist:
statement  statementlist_a {
	$$=$1;
}
;

statementlist_a:
statement statementlist_a {
	
	$$=$1;
}
|/* empty */ {
	$$=conversionConstChar("void");
}
;
statement:
labeledstatement { $$=$1; }
| compoundstatement  { $$=$1; }
| expressionstatement { $$=$1; /* cout<<"Exp: "<<$1<<endl; */ foundedArray=0; justPassedHere=0; }
| selectionstatement  { $$=$1; }
| iterationstatement  { $$=$1; }
| jumpstatement { $$=$1; }
;

labeledstatement:
CASE constant COLON statement {

	string secOp=$2;
	string thrOp=$4;
	cout<<secOp<<" "<<thrOp<<endl;
	if(secOp=="int" && thrOp=="void")
	{
		$$=conversionConstChar("int");
		
	}
	else if(secOp=="char" && thrOp=="void"){
		
		$$=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		$$=conversionConstChar("char");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		$$=conversionConstChar("int");
	}
	else {
		yyerror("Invalid Constant Used In Case Statement.");
		$$=conversionConstChar("typeerr");
	}
	
	
	
}
|DEFAULT COLON statement{
	$$=conversionConstChar("void");
}
;
expressionstatement:
ENDOFSTATEMENT { $$=conversionConstChar("void"); }
| expression ENDOFSTATEMENT { $$=$1; }
| error { yyerror("Missing Expression Or Semicolon");}
;

selectionstatement:
IF OPENINGROUNDBRACKET expression CLOSINGROUNDBRACKET statement  selectionstatement_a
{
	$$=$3;
}
;

selectionstatement_a:
ELSE statement 
|/* empty */ 
;
selectionstatement:
SWITCH OPENINGROUNDBRACKET expression CLOSINGROUNDBRACKET statement{
	string firstOp=$3;
	string SecOp=$5;
	
	if(firstOp!=SecOp){
		yyerror("Switch Case Constant And Paramenter Doesn't Match.");
		$$=conversionConstChar("typeerr");
	}
}
| SWITCH error  expression CLOSINGROUNDBRACKET statement { yyerror("Opening Bracket Missing");}
;

jumpstatement:
CONTINUE ENDOFSTATEMENT { $$=conversionConstChar("void"); }
|CONTINUE error { yyerror("Semicolon Missing");}
|BREAK ENDOFSTATEMENT { $$=conversionConstChar("void");  }
| BREAK error { yyerror("Semicolon Missing");}
|RETURN jumpstatement_a {
	$$=$2;
}
;

jumpstatement_a:
expression ENDOFSTATEMENT { $$=$1; }
| error ENDOFSTATEMENT { yyerror("Expression Missing/Invalid");}
;

iterationstatement:
WHILE OPENINGROUNDBRACKET expression CLOSINGROUNDBRACKET statement
{
	string firstOp=$3;
	if(firstOp!="int"){
		yyerror("Invalid Relational Operator Used In While");
		
	}
	
}
|DO statement WHILE OPENINGROUNDBRACKET expression CLOSINGROUNDBRACKET ENDOFSTATEMENT
{
	string firstOp=$5;
	if(firstOp!="int"){
	yyerror("Invalid Relational Operator Used In Do While");
	}
	
}
|FOR OPENINGROUNDBRACKET expression ENDOFSTATEMENT expression ENDOFSTATEMENT expression CLOSINGROUNDBRACKET statement
{
	string firstOp=$5;
	string secondOp=$3;
	string thirdOp=$7;
	if(firstOp!="int" || secondOp!="int" || thirdOp!="int"){
	yyerror("Non Integer Type Variable Used In For Condition");
	}
	
}
;

conditionalexpression:
equalityexpression  conditionalexpression_a{
	$$=$1;
}
;

conditionalexpression_a:
CONDITIONALOPERATOR expression COLON conditionalexpression
|/* empty */
;

expression:
assignmentexpression expression_a
{
	$$=$1;
}
;
expression_a:
COMMA assignmentexpression expression_a
|/* empty */
;

assignmentexpression:
conditionalexpression {
	$$=$1; 
}
|unaryexpression assignmentoperator assignmentexpression { 
string firstOp=$1;
string secondOp=$3;
if(secondOp!="typeerr"){

if(assignmentOp=="Assign"){
if(firstOp=="int" && secondOp=="float")
{
yyerror("Invalid Assignment Float To Int.");
		$$=conversionConstChar("typeerr");
}

else if(firstOp=="float" && secondOp=="char")
{
yyerror("Invalid Assignment Char To Float.");
		$$=conversionConstChar("typeerr");
}
else if(firstOp=="char" && secondOp=="int")
{
yyerror("Invalid Assignment Int To Char.");
		$$=conversionConstChar("typeerr");
}
else if(firstOp=="char" && secondOp=="float")
{
yyerror("Invalid Assignment Float To Char.");
		$$=conversionConstChar("typeerr");
}
else if(firstOp=="int" && secondOp=="char")
{
yyerror("Invalid Assignment Char To Int.");
		$$=conversionConstChar("typeerr");
}
}
}
else{
		$$=conversionConstChar("typeerr");
}
assignmentOp=" ";
}

|unaryexpression error assignmentexpression { yyerror("Missing Assignment Operator");}
;

equalityexpression:
relationalexpression equalityexpression_a{
	string secOp=$1;
	string thrOp=$2;
	if(secOp=="int" && thrOp=="void")
	{
		$$=conversionConstChar("int");
		
	}
	else if(secOp=="float" && thrOp=="void"){
		
		$$=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		
		$$=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		$$=conversionConstChar("int");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		$$=conversionConstChar("int");
	}
	
	else if(secOp=="float" && thrOp=="float"){
		
		$$=conversionConstChar("int");
	}
	else{
		if(reported==0)
		yyerror("Invalid Equality Operation.");
		$$=conversionConstChar("typeerr");
		reported=0;
	}
}
;
equalityexpression_a:
ISEQUALTO relationalexpression equalityexpression_a{
	string secOp=$2;
	string thrOp=$3;
	if(secOp=="int" && thrOp=="void")
	{
		$$=conversionConstChar("int");
		
	}
	else if(secOp=="float" && thrOp=="void"){
		
		$$=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		
		$$=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		$$=conversionConstChar("char");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		$$=conversionConstChar("int");
	}
	
	else if(secOp=="float" && thrOp=="float"){
		
		$$=conversionConstChar("float");
	}
	
	/*else if(secOp=="int" && thrOp=="float"){
		
		$$=conversionConstChar("float");
	}*/
	
	
	
}
|ISNOTEQUALTO relationalexpression equalityexpression_a{
	string secOp=$2;
	string thrOp=$3;
	if(secOp=="int" && thrOp=="void")
	{
		$$=conversionConstChar("int");
		
	}
	else if(secOp=="float" && thrOp=="void"){
		
		$$=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		
		$$=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		$$=conversionConstChar("char");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		$$=conversionConstChar("int");
	}
	
	else if(secOp=="float" && thrOp=="float"){
		
		$$=conversionConstChar("float");
	}
	
	/*else if(secOp=="int" && thrOp=="float"){
		
		$$=conversionConstChar("float");
	}*/
	
	
	
}
|/* empty */{
$$=conversionConstChar("void");
}
;

relationalexpression:
additiveexpression relationalexpression_a{
	string secOp=$1;
	string thrOp=$2;
	if(secOp=="int" && thrOp=="void")
	{
		$$=conversionConstChar("int");
		
	}
	else if(secOp=="float" && thrOp=="void"){
		
		$$=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		
		$$=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		$$=conversionConstChar("int");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		$$=conversionConstChar("int");
	}
	
	else if(secOp=="float" && thrOp=="float"){
		
		$$=conversionConstChar("int");
	}
	else{
		if(reported==0)
		yyerror("Invalid Relational Operands.");
		$$=conversionConstChar("typeerr");
		reported=1;
	}
}
;

relationalexpression_a:
LESSTHAN additiveexpression relationalexpression_a {
	string secOp=$2;
	string thrOp=$3;
	if(secOp=="int" && thrOp=="void")
	{
		$$=conversionConstChar("int");
		
	}
	else if(secOp=="float" && thrOp=="void"){
		
		$$=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		
		$$=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		$$=conversionConstChar("char");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		$$=conversionConstChar("int");
	}
	
	else if(secOp=="float" && thrOp=="float"){
		
		$$=conversionConstChar("float");
	}
	else{
		$$=conversionConstChar("typeerr");
	}
	
	/*else if(secOp=="int" && thrOp=="float"){
		
		$$=conversionConstChar("float");
	}*/
	
	
	
}
|GREATERTHAN additiveexpression relationalexpression_a{
	string secOp=$2;
	string thrOp=$3;
	if(secOp=="int" && thrOp=="void")
	{
		$$=conversionConstChar("int");
		
	}
	else if(secOp=="float" && thrOp=="void"){
		
		$$=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		
		$$=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		$$=conversionConstChar("char");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		$$=conversionConstChar("int");
	}
	
	else if(secOp=="float" && thrOp=="float"){
		
		$$=conversionConstChar("float");
	}
	
	/*else if(secOp=="int" && thrOp=="float"){
		
		$$=conversionConstChar("float");
	}*/
	
	
	
}
|LESSTHANEQUAL additiveexpression relationalexpression_a{
	string secOp=$2;
	string thrOp=$3;
	if(secOp=="int" && thrOp=="void")
	{
		$$=conversionConstChar("int");
		
	}
	else if(secOp=="float" && thrOp=="void"){
		
		$$=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		
		$$=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		$$=conversionConstChar("char");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		$$=conversionConstChar("int");
	}
	
	else if(secOp=="float" && thrOp=="float"){
		
		$$=conversionConstChar("float");
	}
	
	/*else if(secOp=="int" && thrOp=="float"){
		
		$$=conversionConstChar("float");
	}*/
	
	
	
}
|GREATERTHANEQUAL additiveexpression relationalexpression_a {
	string secOp=$2;
	string thrOp=$3;
	if(secOp=="int" && thrOp=="void")
	{
		$$=conversionConstChar("int");
		
	}
	else if(secOp=="float" && thrOp=="void"){
		
		$$=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		
		$$=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		$$=conversionConstChar("char");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		$$=conversionConstChar("int");
	}
	
	else if(secOp=="float" && thrOp=="float"){
		
		$$=conversionConstChar("float");
	}
	
	/*else if(secOp=="int" && thrOp=="float"){
		
		$$=conversionConstChar("float");
	}*/
	
	
	
}
|/* empty */{
$$=conversionConstChar("void");
}
;

additiveexpression:
multiplicativeexpression additiveexpression_a{
	string secOp=$1;
	string thrOp=$2;
	if(secOp=="int" && thrOp=="void")
	{
		$$=conversionConstChar("int");
	}
	else if(secOp=="float" && thrOp=="void"){
		$$=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		$$=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		$$=conversionConstChar("char");
	}
	else if(secOp=="int" && thrOp=="int"){
		$$=conversionConstChar("int");
	}
	
	else if(secOp=="float" && thrOp=="float"){
		$$=conversionConstChar("float");
	}
	
	else if(secOp=="int" && thrOp=="float"){
		$$=conversionConstChar("float");
	}
	
	else if(secOp=="int" && thrOp=="char"){
		yyerror("Invalid Assignment Char To Int.");
		
		$$=conversionConstChar("typeerr");
	}
	
	else if(secOp=="char" && thrOp=="float"){
		yyerror("Invalid Assignment Float To Char.");
		$$=conversionConstChar("typeerr");
	}
	
	else if(secOp=="float" && thrOp=="int"){
		//yyerror("Invalid Assignment Int To Float.");
		$$=conversionConstChar("float");
	}
	
}
;

additiveexpression_a:
SUB multiplicativeexpression additiveexpression_a {
	string secOp=$2;
	string thrOp=$3;
	if(secOp=="int" && thrOp=="void")
	{
		$$=conversionConstChar("int");
		
	}
	else if(secOp=="float" && thrOp=="void"){
		
		$$=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		
		$$=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		$$=conversionConstChar("char");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		$$=conversionConstChar("int");
	}
	
	else if(secOp=="float" && thrOp=="float"){
		
		$$=conversionConstChar("float");
	}
	
	else if(secOp=="int" && thrOp=="float"){
		
		$$=conversionConstChar("float");
	}
	
	
	
}
|ADD multiplicativeexpression additiveexpression_a{
	string secOp=$2;
	string thrOp=$3;
	if(secOp=="int" && thrOp=="void")
	{
		
		$$=conversionConstChar("int");
		
	}
	else if(secOp=="float" && thrOp=="void"){
		
		$$=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		
		$$=conversionConstChar("char");
	}
	else if(secOp=="char" && thrOp=="char"){
		
		$$=conversionConstChar("char");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		$$=conversionConstChar("int");
	}
	
	else if(secOp=="float" && thrOp=="float"){
		
		$$=conversionConstChar("float");
	}
	
	else if(secOp=="int" && thrOp=="float"){
		
		$$=conversionConstChar("float");
	}
	
	
	
}
|/* empty */ {
$$=conversionConstChar("void");
}
;

multiplicativeexpression:
unaryexpression multiplicativeexpression_a {
	$$=$1;
}
;
multiplicativeexpression_a:
MULTIPLY unaryexpression multiplicativeexpression_a
|DIVIDE unaryexpression multiplicativeexpression_a
|MODULUS unaryexpression multiplicativeexpression_a
|/* empty */
;

assignmentoperator:
ASSIGN {assignmentOp="Assign";}
|ADDANDASSIGN
|SUBANDASSIGN
|MULTIPLYANDASSIGN     
|DIVIDEANDASSIGN
|MODULUSANDASSIGN
;

constant:
INTEGER {string s1 = "int";
char *s2 = new char[s1.size()+1];
strcpy(s2, s1.c_str());
$$=s2;
}
|CHARACTER {string s1 = "char";
char *s2 = new char[s1.size()+1];
strcpy(s2, s1.c_str());
$$=s2;
}
|FLOATPOINT {string s1 = "flaot";
char *s2 = new char[s1.size()+1];
strcpy(s2, s1.c_str());
$$=s2;
}
|STRING {string s1 = "string";
char *s2 = new char[s1.size()+1];
strcpy(s2, s1.c_str());
$$=s2;
}
;

unaryexpression:
postfixexpression {
$$=$1;  

}
|INCREAMENT unaryexpression
{
	string secOp=$2;
	if(secOp=="int" )
	{
		$$=conversionConstChar("int");
	}
	else if( secOp=="float" ){
		$$=conversionConstChar("float");
	}
	else{
		yyerror("Invalid Pre-Increment Operand.");
		$$=conversionConstChar("typeerr");
		reported=1;
	}
}
|DECREAMENT unaryexpression{
	string secOp=$2;
	if(secOp=="int" )
	{
		$$=conversionConstChar("int");
	}
	else if( secOp=="float" ){
		$$=conversionConstChar("float");
	}
	else{
		yyerror("Invalid Pre-Decrement Operand.");
		$$=conversionConstChar("typeerr");
		
	}
}
;

postfixexpression:
primaryexpression postfixexpression_a{
	string secOp=$1;
	string thrOp=$2;
	//qu.Print();
	//findFunctionAndGivePara(theLex,size);
	//cout<<"A: "<<theLex<<endl;
	//cout<<foundedArray<<" "<<iWasHere<<" "<<foundedArrayIndex<<" "<<justPassedHere<<endl;
	
	if((foundedArray==1 && iWasHere==1) || (foundedArray==0 && iWasHere==0) || (foundedArray==1 && iWasHere==0 && foundedArrayIndex==1) || iFollowedOtherPath==1){
	if(secOp=="int" && thrOp=="void")
	{
		
		$$=conversionConstChar("int");
		
	}
	else if(secOp=="float" && thrOp=="void"){
		
		$$=conversionConstChar("float");
	}
	else if(secOp=="char" && thrOp=="void"){
		
		$$=conversionConstChar("char");
	}
	else if(secOp=="float" && thrOp=="int"){
		
		$$=conversionConstChar("float");
	}
	else if(secOp=="int" && thrOp=="int"){
		
		$$=conversionConstChar("int");
	}
	
	
	else{
		if(reported==0)
		yyerror("Invalid Operands Used In Increment Or Decrement.");
		$$=conversionConstChar("typeerr");
		reported=1;
	}
	}
	else if((foundedArray==0 && iWasHere==1)){
		yyerror("Non-array is used with indexes.");
		$$=conversionConstChar("typeerr");
		reported=1;
	}
	else if((foundedArray==1 && iWasHere==0 )){
		yyerror("Array is not used with indexes.");
		$$=conversionConstChar("typeerr");
		reported=1;
	}
	if(iWasHere==1){
		iWasHere=0;foundedArrayIndex=0;
	}
	
	if(go==0){
	findFunctionAndGivePara(theLex,size,&returnType);
	theLex=" ";
	//$$=conversionConstChar(returnType);
	//cout<<<<endl;
	
	}
	
	
}
;

postfixexpression_a:
OPENINGSQUAREBRACKET  expression CLOSINGSQUAREBRACKET postfixexpression_a {
	//cout<<"In Brackets "<<$2<<endl;
	string secOp=$2;
	if(secOp=="int"){
		$$=conversionConstChar("int");
		
	}
	else{
		yyerror("Array being accessed by invalid type constant.");
		$$=conversionConstChar("typeerr");
		reported=1;
	}
	iWasHere=1;
	justPassedHere=1;
}
|OPENINGROUNDBRACKET  postfixexpression_b {
	$$=$2; 
	//cout<<"Done"<<endl;
}
|INCREAMENT postfixexpression_a { $$=conversionConstChar("int");  iFollowedOtherPath=1; }
|DECREAMENT postfixexpression_a	{ $$=conversionConstChar("int"); iFollowedOtherPath=1; }
|/* empty */{
$$=conversionConstChar("void");
}
;

postfixexpression_b:
argumentexpressionlist CLOSINGROUNDBRACKET postfixexpression_a {
	$$=$3; go=0; 
	//cout<<"A : "<<$3<<endl;
	//qu.Print();
}
|CLOSINGROUNDBRACKET postfixexpression_a {
	$$=$2; go=0;
}
|error postfixexpression_a { yyerror("Closing Bracket Missing");}
;

argumentexpressionlist:
additiveexpression argumentexpressionlist_a {
	string curr=$1;
	qu.Add(curr);
	//cout<<$1<<endl;
}
;

argumentexpressionlist_a:
COMMA additiveexpression  argumentexpressionlist_a {
	
	$$=$2;
	string curr=$2;
	qu.Add(curr);
	
	//cout<<$2<<endl;
}
| error additiveexpression  argumentexpressionlist_a { yyerror("Comma Missing");}
|/* empty */ {
	$$=conversionConstChar("void");
}
;

primaryexpression:IDENTIFIER {string s1 = findType(size,$1);
char *s2 = new char[s1.size()+1];
strcpy(s2, s1.c_str());
$$=s2;
int mfoundedArray=isDecArray(size,$1);
if(foundedArray!=1){
foundedArray=mfoundedArray;


//cout<<$1<<" "<<savedFunction<<endl;
}
else{
foundedArrayIndex=1;
}
savedFunction=isFunc(size,$1);
if(savedFunction==1){
	theLex=$1;
	go=-1;
}

/*cout<<"In ID: "<<foundedArray<<" "<<iWasHere<<" "<<foundedArrayIndex<<$1<<endl; */
}
|constant { /*cout<<"SLast: "<<$1<<endl;*/ if(foundedArray==1)foundedArrayIndex=1; $$=$1;}
;








%%

main() {
	SetAll();
	// open a file handle to a particular file:
	FILE *myfile = fopen("input.c", "r");
	FILE *yourFile=fopen("output.txt","w");
	yyout = yourFile;
	
	
	// make sure it is valid:
	if (!myfile) {
		cout << "I can't open a.snazzle.file!" << endl;
		return -1;
	}
	// set flex to read from it instead of defaulting to STDIN:
	yyin = myfile;
	
	// parse through the input until there is no more:
	do {
		yyparse();
	} while (!feof(yyin));
	PrintAll();
	fclose(yyout);
}

