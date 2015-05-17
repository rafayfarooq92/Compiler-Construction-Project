
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STRING = 258,
     INTEGER = 259,
     CHARACTER = 260,
     FLOATPOINT = 261,
     IDENTIFIER = 262,
     INT = 263,
     CHAR = 264,
     FLOAT = 265,
     VOID = 266,
     COMMA = 267,
     OPENINGROUNDBRACKET = 268,
     CLOSINGROUNDBRACKET = 269,
     OPENINGCURLYBRACKET = 270,
     CLOSINGCURLYBRACKET = 271,
     CLOSINGSQUAREBRACKET = 272,
     OPENINGSQUAREBRACKET = 273,
     DEFAULT = 274,
     WHILE = 275,
     BREAK = 276,
     CONTINUE = 277,
     IF = 278,
     FOR = 279,
     SWITCH = 280,
     RETURN = 281,
     DO = 282,
     CASE = 283,
     CONDITIONALOPERATOR = 284,
     MULTIPLY = 285,
     COLON = 286,
     INCREAMENT = 287,
     DECREAMENT = 288,
     GREATERTHAN = 289,
     LESSTHAN = 290,
     GREATERTHANEQUAL = 291,
     ISNOTEQUALTO = 292,
     LESSTHANEQUAL = 293,
     ISEQUALTO = 294,
     ENDOFSTATEMENT = 295,
     ELSE = 296,
     THAN = 297,
     SUB = 298,
     ADD = 299,
     MODULUS = 300,
     DIVIDE = 301,
     MODULUSANDASSIGN = 302,
     DIVIDEANDASSIGN = 303,
     MULTIPLYANDASSIGN = 304,
     SUBANDASSIGN = 305,
     ADDANDASSIGN = 306,
     ASSIGN = 307
   };
#endif
/* Tokens.  */
#define STRING 258
#define INTEGER 259
#define CHARACTER 260
#define FLOATPOINT 261
#define IDENTIFIER 262
#define INT 263
#define CHAR 264
#define FLOAT 265
#define VOID 266
#define COMMA 267
#define OPENINGROUNDBRACKET 268
#define CLOSINGROUNDBRACKET 269
#define OPENINGCURLYBRACKET 270
#define CLOSINGCURLYBRACKET 271
#define CLOSINGSQUAREBRACKET 272
#define OPENINGSQUAREBRACKET 273
#define DEFAULT 274
#define WHILE 275
#define BREAK 276
#define CONTINUE 277
#define IF 278
#define FOR 279
#define SWITCH 280
#define RETURN 281
#define DO 282
#define CASE 283
#define CONDITIONALOPERATOR 284
#define MULTIPLY 285
#define COLON 286
#define INCREAMENT 287
#define DECREAMENT 288
#define GREATERTHAN 289
#define LESSTHAN 290
#define GREATERTHANEQUAL 291
#define ISNOTEQUALTO 292
#define LESSTHANEQUAL 293
#define ISEQUALTO 294
#define ENDOFSTATEMENT 295
#define ELSE 296
#define THAN 297
#define SUB 298
#define ADD 299
#define MODULUS 300
#define DIVIDE 301
#define MODULUSANDASSIGN 302
#define DIVIDEANDASSIGN 303
#define MULTIPLYANDASSIGN 304
#define SUBANDASSIGN 305
#define ADDANDASSIGN 306
#define ASSIGN 307




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 22 "bison.y"

	int ival;
	float fval;
	char *sval;
	char charval;



/* Line 1676 of yacc.c  */
#line 165 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


