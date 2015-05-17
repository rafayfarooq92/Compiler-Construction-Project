
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "bison.y"

#include <cstdio>
#include <iostream>
#include <sstream>
using namespace std;

// stuff from flex that bison needs to know about:
extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
extern "C" FILE *yyout;
void yyerror(const char *s);
extern int lineNumber;



/* Line 189 of yacc.c  */
#line 90 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 22 "bison.y"

	int ival;
	float fval;
	char *sval;
	char charval;



/* Line 214 of yacc.c  */
#line 239 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */

/* Line 264 of yacc.c  */
#line 78 "bison.y"

int size=0;
string scoper="Global";
string prev_scope="Global";

char isFunction=' ';
string myType=" ";
int myArraySize=-1;
bool check=false;
class myClass{
public:
string lexeme;
string type;
string scope;
int arraySize;
string functionName;
int lineNumbers;



void initArray()
{
		lexeme=" ";
		type=" ";
		scope=scoper;
		arraySize=-1;
		functionName=" ";
		lineNumbers=lineNumber;
		
		
	
}


void printArray(){
		if(arraySize==-1)
		cout<<lexeme<<"\t\t"<<type<<"\t\t"<<scope<<"\t\t"<<" "<<"\t\t"<<functionName<<"\t\t"<<lineNumbers<<endl;
		else
		cout<<lexeme<<"\t\t"<<type<<"\t\t"<<scope<<"\t\t"<<arraySize<<"\t\t"<<functionName<<"\t\t"<<lineNumbers<<endl;
}
};
myClass tabElem[500];

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




/* Line 264 of yacc.c  */
#line 327 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   389

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  150
/* YYNRULES -- Number of states.  */
#define YYNSTATES  278

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    10,    12,    15,    16,    21,
      24,    27,    29,    32,    34,    36,    38,    40,    42,    44,
      47,    50,    53,    56,    57,    61,    65,    69,    72,    75,
      78,    81,    85,    89,    92,    94,    95,    99,   103,   107,
     108,   111,   113,   114,   117,   121,   122,   125,   128,   129,
     131,   135,   140,   142,   146,   149,   153,   154,   157,   159,
     160,   163,   165,   168,   171,   174,   176,   179,   182,   183,
     185,   187,   189,   191,   193,   195,   200,   204,   206,   209,
     211,   218,   221,   222,   228,   234,   237,   240,   243,   246,
     249,   252,   255,   261,   269,   279,   282,   287,   288,   291,
     295,   296,   298,   302,   306,   309,   313,   317,   318,   321,
     325,   329,   333,   337,   338,   341,   345,   349,   350,   353,
     357,   361,   365,   366,   368,   370,   372,   374,   376,   378,
     380,   382,   384,   386,   388,   391,   394,   397,   402,   405,
     408,   411,   412,   416,   419,   422,   425,   429,   433,   434,
     436
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    56,    55,    -1,    56,    55,    -1,    -1,
      57,    -1,    71,    40,    -1,    -1,    61,    62,    58,    59,
      -1,    62,    60,    -1,    69,    83,    -1,    83,    -1,    69,
      83,    -1,    83,    -1,    11,    -1,     9,    -1,     8,    -1,
      10,    -1,    63,    -1,    67,    63,    -1,     7,    64,    -1,
      13,    65,    -1,    18,    66,    -1,    -1,    62,    14,    64,
      -1,    79,    14,    64,    -1,    79,     1,    64,    -1,    14,
      64,    -1,     1,    64,    -1,    17,    64,    -1,     1,    64,
      -1,     4,    17,    64,    -1,     4,     1,    64,    -1,    30,
      68,    -1,    67,    -1,    -1,    71,    40,    70,    -1,    71,
       1,    70,    -1,    71,    40,    70,    -1,    -1,    61,    72,
      -1,    73,    -1,    -1,    75,    74,    -1,    12,    75,    74,
      -1,    -1,    62,    76,    -1,    52,    77,    -1,    -1,   110,
      -1,    15,    78,    16,    -1,    15,    78,    12,    16,    -1,
      77,    -1,    78,    12,    77,    -1,    81,    80,    -1,    12,
      81,    80,    -1,    -1,    61,    82,    -1,    62,    -1,    -1,
      15,    84,    -1,    16,    -1,    86,    16,    -1,    69,    85,
      -1,    86,    16,    -1,    16,    -1,    88,    87,    -1,    88,
      87,    -1,    -1,    89,    -1,    83,    -1,    90,    -1,    91,
      -1,    95,    -1,    93,    -1,    28,   110,    31,    88,    -1,
      19,    31,    88,    -1,    40,    -1,    98,    40,    -1,     1,
      -1,    23,    13,    98,    14,    88,    92,    -1,    41,    88,
      -1,    -1,    25,    13,    98,    14,    88,    -1,    25,     1,
      98,    14,    88,    -1,    22,    40,    -1,    22,     1,    -1,
      21,    40,    -1,    21,     1,    -1,    26,    94,    -1,    98,
      40,    -1,     1,    40,    -1,    20,    13,    98,    14,    88,
      -1,    27,    88,    20,    13,    98,    14,    40,    -1,    24,
      13,    98,    40,    98,    40,    98,    14,    88,    -1,   101,
      97,    -1,    29,    98,    31,    96,    -1,    -1,   100,    99,
      -1,    12,   100,    99,    -1,    -1,    96,    -1,   111,   109,
     100,    -1,   111,     1,   100,    -1,   103,   102,    -1,    39,
     103,   102,    -1,    37,   103,   102,    -1,    -1,   105,   104,
      -1,    35,   105,   104,    -1,    34,   105,   104,    -1,    38,
     105,   104,    -1,    36,   105,   104,    -1,    -1,   107,   106,
      -1,    43,   107,   106,    -1,    44,   107,   106,    -1,    -1,
     111,   108,    -1,    30,   111,   108,    -1,    46,   111,   108,
      -1,    45,   111,   108,    -1,    -1,    52,    -1,    51,    -1,
      50,    -1,    49,    -1,    48,    -1,    47,    -1,     4,    -1,
       5,    -1,     6,    -1,     3,    -1,   112,    -1,    32,   111,
      -1,    33,   111,    -1,   117,   113,    -1,    18,    98,    17,
     113,    -1,    13,   114,    -1,    32,   113,    -1,    33,   113,
      -1,    -1,   115,    14,   113,    -1,    14,   113,    -1,     1,
     113,    -1,   105,   116,    -1,    12,   105,   116,    -1,     1,
     105,   116,    -1,    -1,     7,    -1,   110,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   163,   163,   167,   168,   172,   173,   177,   177,   181,
     187,   188,   193,   194,   198,   202,   206,   210,   217,   220,
     228,   243,   246,   249,   257,   258,   259,   260,   261,   266,
     269,   270,   273,   278,   281,   282,   286,   287,   291,   292,
     296,   300,   301,   304,   308,   309,   313,   317,   318,   321,
     321,   321,   322,   322,   327,   330,   331,   335,   338,   339,
     344,   346,   347,   348,   351,   352,   356,   360,   361,   364,
     365,   366,   367,   368,   369,   373,   374,   378,   379,   380,
     384,   388,   389,   392,   393,   397,   398,   399,   400,   401,
     405,   406,   410,   411,   412,   416,   420,   421,   425,   428,
     429,   433,   434,   435,   439,   442,   443,   444,   448,   452,
     453,   454,   455,   456,   460,   464,   465,   466,   470,   473,
     474,   475,   476,   480,   481,   482,   483,   484,   485,   489,
     490,   491,   492,   496,   497,   498,   502,   506,   507,   508,
     509,   510,   514,   515,   516,   520,   524,   525,   526,   529,
     530
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "INTEGER", "CHARACTER",
  "FLOATPOINT", "IDENTIFIER", "INT", "CHAR", "FLOAT", "VOID", "COMMA",
  "OPENINGROUNDBRACKET", "CLOSINGROUNDBRACKET", "OPENINGCURLYBRACKET",
  "CLOSINGCURLYBRACKET", "CLOSINGSQUAREBRACKET", "OPENINGSQUAREBRACKET",
  "DEFAULT", "WHILE", "BREAK", "CONTINUE", "IF", "FOR", "SWITCH", "RETURN",
  "DO", "CASE", "CONDITIONALOPERATOR", "MULTIPLY", "COLON", "INCREAMENT",
  "DECREAMENT", "GREATERTHAN", "LESSTHAN", "GREATERTHANEQUAL",
  "ISNOTEQUALTO", "LESSTHANEQUAL", "ISEQUALTO", "ENDOFSTATEMENT", "ELSE",
  "THAN", "SUB", "ADD", "MODULUS", "DIVIDE", "MODULUSANDASSIGN",
  "DIVIDEANDASSIGN", "MULTIPLYANDASSIGN", "SUBANDASSIGN", "ADDANDASSIGN",
  "ASSIGN", "$accept", "transitionunit", "transitionunit_a",
  "externaldeclaration", "functiondefinition", "$@1",
  "functiondefinition_a", "functiondefinition_b", "typespecifier",
  "declarator", "directdeclarator", "directdeclarator_a",
  "directdeclarator_b", "directdeclarator_c", "pointer", "pointer_a",
  "declarationlist", "declarationlist_a", "declaration", "declaration_a",
  "initdeclaratorlist", "initdeclaratorlist_a", "initdeclarator",
  "initdeclarator_a", "initializer", "initializerlist", "parameterlist",
  "parameterlist_a", "parameterdeclaration", "parameterdeclaration_a",
  "compoundstatement", "compoundstatement_a", "compoundstatement_b",
  "statementlist", "statementlist_a", "statement", "labeledstatement",
  "expressionstatement", "selectionstatement", "selectionstatement_a",
  "jumpstatement", "jumpstatement_a", "iterationstatement",
  "conditionalexpression", "conditionalexpression_a", "expression",
  "expression_a", "assignmentexpression", "equalityexpression",
  "equalityexpression_a", "relationalexpression", "relationalexpression_a",
  "additiveexpression", "additiveexpression_a", "multiplicativeexpression",
  "multiplicativeexpression_a", "assignmentoperator", "constant",
  "unaryexpression", "postfixexpression", "postfixexpression_a",
  "postfixexpression_b", "argumentexpressionlist",
  "argumentexpressionlist_a", "primaryexpression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    56,    58,    57,    57,
      59,    59,    60,    60,    61,    61,    61,    61,    62,    62,
      63,    64,    64,    64,    65,    65,    65,    65,    65,    66,
      66,    66,    66,    67,    68,    68,    69,    69,    70,    70,
      71,    72,    72,    73,    74,    74,    75,    76,    76,    77,
      77,    77,    78,    78,    79,    80,    80,    81,    82,    82,
      83,    84,    84,    84,    85,    85,    86,    87,    87,    88,
      88,    88,    88,    88,    88,    89,    89,    90,    90,    90,
      91,    92,    92,    91,    91,    93,    93,    93,    93,    93,
      94,    94,    95,    95,    95,    96,    97,    97,    98,    99,
      99,   100,   100,   100,   101,   102,   102,   102,   103,   104,
     104,   104,   104,   104,   105,   106,   106,   106,   107,   108,
     108,   108,   108,   109,   109,   109,   109,   109,   109,   110,
     110,   110,   110,   111,   111,   111,   112,   113,   113,   113,
     113,   113,   114,   114,   114,   115,   116,   116,   116,   117,
     117
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     1,     2,     0,     4,     2,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     0,     3,     3,     3,     2,     2,     2,
       2,     3,     3,     2,     1,     0,     3,     3,     3,     0,
       2,     1,     0,     2,     3,     0,     2,     2,     0,     1,
       3,     4,     1,     3,     2,     3,     0,     2,     1,     0,
       2,     1,     2,     2,     2,     1,     2,     2,     0,     1,
       1,     1,     1,     1,     1,     4,     3,     1,     2,     1,
       6,     2,     0,     5,     5,     2,     2,     2,     2,     2,
       2,     2,     5,     7,     9,     2,     4,     0,     2,     3,
       0,     1,     3,     3,     2,     3,     3,     0,     2,     3,
       3,     3,     3,     0,     2,     3,     3,     0,     2,     3,
       3,     3,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     4,     2,     2,
       2,     0,     3,     2,     2,     2,     3,     3,     0,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    23,    16,    15,    17,    14,    35,     0,     4,     5,
      42,     0,    18,     0,     0,     0,     0,    20,    34,    33,
       1,     2,     4,     7,    40,    41,    45,     0,     9,    42,
       0,     0,    13,    19,     6,    23,    23,    59,     0,    21,
       0,    56,    23,     0,    23,    22,     3,     0,     0,    46,
       0,    43,    79,   132,   129,   130,   131,   149,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    77,     0,    70,    60,     0,     0,    69,    71,    72,
      74,    73,   101,     0,   100,    97,   107,   113,   117,   150,
       0,   133,   141,    48,    12,    39,    39,    28,    27,    58,
      57,    23,    23,    23,     0,    54,    30,    23,    23,    29,
       0,    47,    49,     8,     0,    11,    45,     0,     0,    88,
      87,    86,    85,     0,     0,     0,     0,     0,    89,     0,
       0,     0,   134,   135,    65,    63,     0,    62,    66,     0,
      78,     0,    98,     0,    95,     0,     0,   104,     0,     0,
       0,     0,   108,     0,     0,   114,     0,     0,     0,     0,
     128,   127,   126,   125,   124,   123,   118,     0,     0,     0,
     141,   141,   136,    37,     0,    36,    24,    26,    25,    56,
      32,    31,    52,     0,    10,    44,    76,     0,     0,     0,
       0,     0,    91,    90,     0,     0,    64,    67,   100,     0,
     107,   122,   107,   113,   113,   113,   113,   117,   117,   103,
     122,   122,   122,   102,   141,   141,     0,   138,     0,     0,
     139,   140,    39,    55,     0,    50,     0,     0,     0,     0,
       0,     0,    75,    99,     0,   106,   105,   110,   109,   112,
     111,   115,   116,   119,   121,   120,   144,   143,     0,     0,
     145,   141,   141,    38,    51,    53,    92,    82,     0,    84,
      83,     0,    96,     0,     0,   142,   137,     0,    80,     0,
       0,   147,   146,    81,     0,    93,     0,    94
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,    21,    22,     9,    48,   113,    28,    29,    11,
      12,    17,    39,    45,    13,    19,    30,   173,    14,    24,
      25,    51,    26,    49,   111,   183,    40,   105,    41,   100,
      73,    74,   135,    75,   138,    76,    77,    78,    79,   268,
      80,   128,    81,    82,   144,    83,   142,    84,    85,   147,
      86,   152,    87,   155,    88,   166,   167,    89,    90,    91,
     172,   217,   218,   250,    92
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -145
static const yytype_int16 yypact[] =
{
     162,    26,  -145,  -145,  -145,  -145,   -17,    64,   162,  -145,
      10,   172,  -145,    35,     5,   148,    65,  -145,  -145,  -145,
    -145,  -145,   162,    -4,  -145,  -145,    77,   235,  -145,    10,
      87,    13,  -145,  -145,  -145,    26,    26,    10,    91,  -145,
      40,   116,    26,    30,    26,  -145,  -145,   304,   172,  -145,
      10,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,    89,
     141,    17,    27,   161,   202,    85,    71,   349,   199,   120,
     120,  -145,   273,  -145,  -145,   180,   311,  -145,  -145,  -145,
    -145,  -145,  -145,   176,   212,   196,    42,   108,   -23,  -145,
     183,  -145,   118,   185,  -145,   275,   275,  -145,  -145,  -145,
    -145,    26,    26,    26,   275,  -145,  -145,    26,    26,  -145,
     304,  -145,  -145,  -145,    87,  -145,    77,   349,   120,  -145,
    -145,  -145,  -145,   120,   120,   120,   120,   207,  -145,   208,
     229,   221,  -145,  -145,  -145,  -145,   237,  -145,  -145,   311,
    -145,   120,  -145,   120,  -145,   120,   120,  -145,   120,   120,
     120,   120,  -145,   120,   120,  -145,   120,   120,   120,   120,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,   120,   134,   120,
     118,   118,  -145,  -145,   224,  -145,  -145,  -145,  -145,   116,
    -145,  -145,  -145,   102,  -145,  -145,  -145,   251,   252,   233,
     276,   277,  -145,  -145,   274,   349,  -145,  -145,   212,   271,
      42,    67,    42,   108,   108,   108,   108,   -23,   -23,  -145,
      67,    67,    67,  -145,   118,   118,   133,  -145,   289,   287,
    -145,  -145,   275,  -145,   266,  -145,   349,   349,   120,   349,
     349,   120,  -145,  -145,   120,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,   120,   120,
    -145,   118,   118,  -145,  -145,  -145,  -145,   270,   284,  -145,
    -145,   314,  -145,   133,   133,  -145,  -145,   349,  -145,   120,
     285,  -145,  -145,  -145,   315,  -145,   349,  -145
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -145,  -145,   318,   341,  -145,  -145,  -145,  -145,     7,     9,
     329,    14,  -145,  -145,   339,  -145,   -18,   -92,   -11,  -145,
    -145,   230,   297,  -145,  -105,  -145,  -145,   169,   245,  -145,
      -5,  -145,  -145,   286,   218,   -66,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,   125,  -145,   -63,   163,   -73,  -145,   -25,
      43,   117,  -116,   -22,    45,    -3,  -145,   -45,   -58,  -145,
    -144,  -145,  -145,   -70,  -145
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -149
static const yytype_int16 yytable[] =
{
      31,   130,   112,   129,   175,   182,    32,    10,   -48,    72,
     139,   132,   133,     6,    95,    10,    31,     1,   119,    23,
     153,   154,    37,   131,    38,    94,   220,   221,   121,    10,
     114,   107,   203,   204,   205,   206,   -48,    31,    93,    15,
       6,   102,     1,   115,    16,    34,    99,   108,    47,    97,
      98,   186,   216,    96,   103,   187,   106,   120,   109,    93,
     188,   189,   190,   191,    20,   112,    42,   122,   198,    43,
     246,   247,   127,   139,    53,    54,    55,    56,    57,   145,
     199,   146,    44,   209,   174,   174,   125,   201,   201,    50,
     201,   201,   201,   201,   213,   201,   201,   157,   126,   210,
     211,   212,    27,    69,    70,   101,   219,   265,   266,   184,
     201,    37,   158,   159,   224,   176,   177,   178,   225,   255,
     117,   180,   181,    53,    54,    55,    56,    57,   104,   232,
     253,   168,   263,   264,   248,   214,   169,    53,    54,    55,
      56,    57,   148,   149,   150,   249,   151,  -148,   215,    35,
     170,   171,    69,    70,   118,     1,     2,     3,     4,     5,
     256,   257,    36,   259,   260,   258,    69,    70,   261,     1,
       2,     3,     4,     5,   123,   235,   201,   236,     6,   112,
       2,     3,     4,     5,   156,   241,   242,    27,   200,   202,
     201,   201,     6,   271,   272,  -122,   137,  -122,   207,   208,
    -122,   273,    53,    54,    55,    56,   274,   243,   244,   245,
     277,   174,  -122,   157,  -122,   124,   140,  -122,  -122,  -122,
    -122,  -122,  -122,  -122,   141,   143,  -122,  -122,   158,   159,
     160,   161,   162,   163,   164,   165,    52,    47,    53,    54,
      55,    56,    57,     2,     3,     4,     5,   192,   193,   194,
      27,    58,   195,   196,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,   222,   226,   227,    69,    70,    53,
      54,    55,    56,   228,    52,    71,    53,    54,    55,    56,
      57,   110,   254,     2,     3,     4,     5,   231,    27,   134,
     229,   230,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,   234,   251,   252,    69,    70,    53,    54,    55,
      56,   267,    52,    71,    53,    54,    55,    56,    57,   110,
     237,   238,   239,   240,   269,   275,    27,   -68,   270,   276,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      46,     8,    33,    69,    70,    18,   185,   116,   223,   179,
      52,    71,    53,    54,    55,    56,    57,   197,   136,   262,
       0,   233,     0,     0,    27,     0,     0,     0,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,     0,     0,
       0,    69,    70,     0,     0,     0,     0,     0,     0,    71
};

static const yytype_int16 yycheck[] =
{
      11,    67,    47,    66,    96,   110,    11,     0,    12,    27,
      76,    69,    70,    30,     1,     8,    27,     7,     1,    10,
      43,    44,    15,    68,    15,    30,   170,   171,     1,    22,
      48,     1,   148,   149,   150,   151,    40,    48,    29,    13,
      30,     1,     7,    48,    18,    40,    37,    17,    52,    35,
      36,   117,   168,    40,    14,   118,    42,    40,    44,    50,
     123,   124,   125,   126,     0,   110,     1,    40,   141,     4,
     214,   215,     1,   139,     3,     4,     5,     6,     7,    37,
     143,    39,    17,   156,    95,    96,     1,   145,   146,    12,
     148,   149,   150,   151,   167,   153,   154,    30,    13,   157,
     158,   159,    15,    32,    33,    14,   169,   251,   252,   114,
     168,   104,    45,    46,    12,   101,   102,   103,    16,   224,
      31,   107,   108,     3,     4,     5,     6,     7,    12,   195,
     222,    13,   248,   249,     1,     1,    18,     3,     4,     5,
       6,     7,    34,    35,    36,    12,    38,    14,    14,     1,
      32,    33,    32,    33,    13,     7,     8,     9,    10,    11,
     226,   227,    14,   229,   230,   228,    32,    33,   231,     7,
       8,     9,    10,    11,    13,   200,   234,   202,    30,   224,
       8,     9,    10,    11,     1,   207,   208,    15,   145,   146,
     248,   249,    30,   263,   264,    12,    16,    14,   153,   154,
      17,   267,     3,     4,     5,     6,   269,   210,   211,   212,
     276,   222,    29,    30,    31,    13,    40,    34,    35,    36,
      37,    38,    39,    40,    12,    29,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     1,    52,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    40,    40,    20,
      15,    16,    31,    16,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    40,    14,    14,    32,    33,     3,
       4,     5,     6,    40,     1,    40,     3,     4,     5,     6,
       7,    15,    16,     8,     9,    10,    11,    13,    15,    16,
      14,    14,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    31,    14,    17,    32,    33,     3,     4,     5,
       6,    41,     1,    40,     3,     4,     5,     6,     7,    15,
     203,   204,   205,   206,    40,    40,    15,    16,    14,    14,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      22,     0,    13,    32,    33,     6,   116,    50,   179,   104,
       1,    40,     3,     4,     5,     6,     7,   139,    72,   234,
      -1,   198,    -1,    -1,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,     9,    10,    11,    30,    54,    56,    57,
      61,    62,    63,    67,    71,    13,    18,    64,    67,    68,
       0,    55,    56,    62,    72,    73,    75,    15,    60,    61,
      69,    71,    83,    63,    40,     1,    14,    61,    62,    65,
      79,    81,     1,     4,    17,    66,    55,    52,    58,    76,
      12,    74,     1,     3,     4,     5,     6,     7,    16,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    32,
      33,    40,    69,    83,    84,    86,    88,    89,    90,    91,
      93,    95,    96,    98,   100,   101,   103,   105,   107,   110,
     111,   112,   117,    62,    83,     1,    40,    64,    64,    62,
      82,    14,     1,    14,    12,    80,    64,     1,    17,    64,
      15,    77,   110,    59,    69,    83,    75,    31,    13,     1,
      40,     1,    40,    13,    13,     1,    13,     1,    94,    98,
      88,   110,   111,   111,    16,    85,    86,    16,    87,    88,
      40,    12,    99,    29,    97,    37,    39,   102,    34,    35,
      36,    38,   104,    43,    44,   106,     1,    30,    45,    46,
      47,    48,    49,    50,    51,    52,   108,   109,    13,    18,
      32,    33,   113,    70,    71,    70,    64,    64,    64,    81,
      64,    64,    77,    78,    83,    74,    88,    98,    98,    98,
      98,    98,    40,    40,    20,    31,    16,    87,   100,    98,
     103,   111,   103,   105,   105,   105,   105,   107,   107,   100,
     111,   111,   111,   100,     1,    14,   105,   114,   115,    98,
     113,   113,    40,    80,    12,    16,    14,    14,    40,    14,
      14,    13,    88,    99,    31,   102,   102,   104,   104,   104,
     104,   106,   106,   108,   108,   108,   113,   113,     1,    12,
     116,    14,    17,    70,    16,    77,    88,    88,    98,    88,
      88,    98,    96,   105,   105,   113,   113,    41,    92,    40,
      14,   116,   116,    88,    98,    40,    14,    88
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 7:

/* Line 1455 of yacc.c  */
#line 177 "bison.y"
    {
scoper=(yyvsp[(2) - (2)].sval);

}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 181 "bison.y"
    {
scoper=(yyvsp[(1) - (2)].sval);
}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 198 "bison.y"
    {
(yyval.sval)=(yyvsp[(1) - (1)].sval);
myType=(yyvsp[(1) - (1)].sval);
}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 202 "bison.y"
    {
(yyval.sval)=(yyvsp[(1) - (1)].sval);
myType=(yyvsp[(1) - (1)].sval);
}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 206 "bison.y"
    {
(yyval.sval)=(yyvsp[(1) - (1)].sval);
myType=(yyvsp[(1) - (1)].sval);
}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 210 "bison.y"
    {
(yyval.sval)=(yyvsp[(1) - (1)].sval);
myType=(yyvsp[(1) - (1)].sval);
}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 217 "bison.y"
    {
(yyval.sval)=(yyvsp[(1) - (1)].sval);
}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 220 "bison.y"
    {
(yyval.sval)=(yyvsp[(2) - (2)].sval);
}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 228 "bison.y"
    {
tabElem[size].lexeme=(yyvsp[(1) - (2)].sval);
tabElem[size].scope=scoper;
tabElem[size].type=myType;
tabElem[size].arraySize=myArraySize;
tabElem[size].functionName=(yyvsp[(2) - (2)].charval);
myArraySize=-1;
tabElem[size].lineNumbers=lineNumber;
size++;
(yyval.sval)=(yyvsp[(1) - (2)].sval);
}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 243 "bison.y"
    {
(yyval.charval)='Y';
}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 246 "bison.y"
    {
(yyval.charval)=' ';
}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 249 "bison.y"
    {
(yyval.charval)=' ';
}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 259 "bison.y"
    { yyerror("Closing Bracket Missing");}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 261 "bison.y"
    { yyerror("Closing Bracket Missing");}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 266 "bison.y"
    {
myArraySize=0;
}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 269 "bison.y"
    { yyerror("Closing Square Bracket Missing");}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 270 "bison.y"
    {
myArraySize=(yyvsp[(1) - (3)].ival);
}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 273 "bison.y"
    { yyerror("Closing Bracket Missing");}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 287 "bison.y"
    { yyerror("Semicolon Missing");}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 380 "bison.y"
    { yyerror("Missing Expression Or Semicolon");}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 393 "bison.y"
    { yyerror("Opening Bracket Missing");}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 398 "bison.y"
    { yyerror("Semicolon Missing");}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 400 "bison.y"
    { yyerror("Semicolon Missing");}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 406 "bison.y"
    { yyerror("Expression Missing/Invalid");}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 435 "bison.y"
    { yyerror("Missing Assignment Operator");}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 516 "bison.y"
    { yyerror("Closing Bracket Missing");}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 525 "bison.y"
    { yyerror("Comma Missing");}
    break;



/* Line 1455 of yacc.c  */
#line 2045 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 580 "bison.y"


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


