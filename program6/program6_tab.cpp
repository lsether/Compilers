/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 6 "program6.y" /* yacc.c:339  */

  #include<iostream>
  #include<string>
  #include"program6.hpp"
  #include<FlexLexer.h>
  
  using namespace std; // cause I am lazy
  
  // these are declared in tester.cpp
  extern yyFlexLexer scanner;
  extern Node *head;
  
  /*
   * And this is the magic to make this work with a C++ scanner.
   * Of course change the names to protect the innocent.
   */
  
  #define yylex() scanner.yylex()
  /*
   * Defined in the .lpp file.
   */
  
  extern void yyerror(const char *str);
  
  /*
   * The %defines is the same as -d on the command line but you could also 
   s pec*ify
   * a filename with this. Otherwise, the "output" defines will be named the 
   same
   * as the .cpp file only with .hpp
   *
   * The union becomes yylval. Cannot use something that has a constructor.
   */
  
  

#line 103 "program6_tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "program6_tab.hpp".  */
#ifndef YY_YY_PROGRAM6_TAB_HPP_INCLUDED
# define YY_YY_PROGRAM6_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    MINUS = 258,
    OR = 259,
    TIMES = 260,
    DIV = 261,
    MOD = 262,
    AND = 263,
    EQ = 264,
    NE = 265,
    GE = 266,
    LE = 267,
    GT = 268,
    LT = 269,
    LPAREN = 270,
    RPAREN = 271,
    NOT = 272,
    DOT = 273,
    THIS = 274,
    LBRACK = 275,
    RBRACK = 276,
    INT = 277,
    NEW = 278,
    NULLT = 279,
    READ = 280,
    SEMI = 281,
    COMMA = 282,
    IF = 283,
    ELSE = 284,
    ASSIGN = 285,
    PRINT = 286,
    WHILE = 287,
    RETURN = 288,
    LBRACE = 289,
    RBRACE = 290,
    VOID = 291,
    CLASS = 292,
    ID = 293,
    NUMBER = 294,
    PLUS = 295,
    THEN = 296,
    UPLUS = 297,
    UMINUS = 298
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 47 "program6.y" /* yacc.c:355  */

    string *str;
    Node *n_type;
  

#line 193 "program6_tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROGRAM6_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 210 "program6_tab.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   408

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  195

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    86,    86,    87,    92,    95,    98,   103,   108,   115,
     118,   121,   124,   127,   130,   133,   136,   139,   146,   149,
     154,   157,   162,   165,   170,   175,   178,   181,   184,   189,
     194,   199,   202,   207,   210,   213,   218,   223,   226,   229,
     232,   236,   239,   245,   248,   253,   256,   259,   262,   265,
     268,   271,   274,   280,   283,   286,   289,   292,   298,   301,
     304,   309,   312,   317,   320,   325,   329,   333,   336,   339,
     342,   345,   346,   347,   348,   349,   354,   357,   360,   363,
     366,   369,   372,   375,   378,   383,   386,   389,   394,   399,
     404,   409,   414,   419,   426,   431,   436,   443,   448,   453,
     458,   465,   468,   473,   476
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MINUS", "OR", "TIMES", "DIV", "MOD",
  "AND", "EQ", "NE", "GE", "LE", "GT", "LT", "LPAREN", "RPAREN", "NOT",
  "DOT", "THIS", "LBRACK", "RBRACK", "INT", "NEW", "NULLT", "READ", "SEMI",
  "COMMA", "IF", "ELSE", "ASSIGN", "PRINT", "WHILE", "RETURN", "LBRACE",
  "RBRACE", "VOID", "CLASS", "ID", "NUMBER", "PLUS", "THEN", "UPLUS",
  "UMINUS", "$accept", "final", "program", "classDeclaration", "classBody",
  "classBodyMoreVar", "classBodyMoreConst", "classBodyMoreMethod",
  "varDeclaration", "type", "constructorDeclaration", "methodDeclaration",
  "resultType", "parameterList", "parameter", "block",
  "localVarDeclaration", "statementMore", "statement", "name", "arglist",
  "conditionalStatement", "optionalExpression", "expression",
  "newExpression", "unaryOp", "relationOp", "sumOp", "productOp",
  "bracketexp", "multibrackets", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
# endif

#define YYPACT_NINF -110

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-110)))

#define YYTABLE_NINF -27

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      28,   -33,    29,    22,  -110,  -110,    -8,    -8,    34,  -110,
       9,  -110,  -110,  -110,    11,    41,    58,  -110,  -110,   107,
      47,    57,    88,  -110,  -110,  -110,  -110,    46,  -110,  -110,
      76,    94,    -4,    94,  -110,    97,   103,  -110,  -110,   275,
    -110,    83,  -110,    58,  -110,    -9,  -110,   115,   106,    -2,
    -110,  -110,   299,  -110,  -110,   146,    -4,  -110,  -110,  -110,
     129,    -4,  -110,    80,   320,  -110,  -110,   129,  -110,  -110,
     183,   184,   185,   305,  -110,   -11,   158,  -110,   337,   348,
    -110,    98,  -110,  -110,   305,   305,   305,   305,   305,   305,
      48,  -110,   187,   162,  -110,   305,   144,   177,   267,  -110,
    -110,  -110,  -110,  -110,   279,   186,   178,  -110,   182,   359,
    -110,  -110,   305,   201,   305,   305,   186,    50,    85,   267,
     167,  -110,   181,  -110,   202,   122,   189,  -110,   305,  -110,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   305,
     305,   305,   305,   205,   305,  -110,   197,  -110,    90,  -110,
     224,   370,   198,   305,   370,  -110,   220,    94,   305,   220,
      94,  -110,   118,   160,   160,  -110,  -110,  -110,  -110,    35,
      35,    35,    35,    35,    35,   160,  -110,   248,  -110,   199,
    -110,   212,  -110,   267,  -110,   279,    94,   268,    94,  -110,
    -110,  -110,   370,  -110,  -110
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     0,     0,     0,     1,
       0,     7,     6,     8,     0,     0,    25,    13,    32,    26,
       0,     0,     0,    18,    31,    20,    22,     0,     4,    17,
       0,    27,    33,    28,    15,     0,     0,    19,    12,     0,
      21,     0,     9,    26,    23,     0,   103,     0,     0,     0,
      34,    14,     0,    11,    16,     0,    33,    24,   104,    36,
       0,     0,    10,     0,     0,    29,    35,     0,    53,    45,
       0,     0,     0,    63,    37,    54,     0,    52,     0,     0,
      43,     0,    49,    30,     0,    58,     0,     0,     0,     0,
       0,    67,     0,    54,    66,     0,    65,     0,    64,    70,
      71,    72,    73,    74,     0,    57,     0,    38,     0,     0,
      39,    44,    58,     0,     0,     0,    56,     0,     0,    59,
       0,    85,     0,    87,    77,    81,     0,    86,    58,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    41,     0,    40,     0,    55,
       0,     0,     0,     0,     0,    75,    78,    80,    58,    82,
      84,    69,     0,    95,    96,    97,    98,    99,   100,    88,
      89,    90,    91,    92,    93,    94,   101,     0,    42,     0,
      46,    61,    48,    60,    50,     0,    79,     0,    83,    68,
     102,    47,     0,    76,    62
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,  -110,   228,    91,  -110,   223,    52,   226,   -28,
      59,   -15,    61,   188,   204,   -47,  -110,   169,   -77,   -63,
    -109,  -110,  -110,    16,  -110,  -110,  -110,  -110,  -110,   -73,
     -16
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    11,    20,    21,    22,    23,    24,
      25,    26,    41,    49,    50,    77,    78,    79,    80,    96,
     118,    82,    97,   119,    99,   100,   101,   102,   103,   105,
      33
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,    81,   111,   148,    48,     6,    56,    44,   116,   104,
      15,    -5,     1,    65,    60,    81,    81,    57,    16,   162,
      83,    44,     9,   116,    44,    61,    10,   -26,    48,     1,
       7,    16,   111,    48,    43,    13,    76,    44,   130,   131,
     132,   133,   134,   135,    17,    18,    81,    19,     2,   187,
     108,   156,   159,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,     2,   151,     8,    10,    16,
     124,    27,    36,    39,   181,   142,    29,   184,    30,    16,
      40,    27,    34,    18,    45,    19,   125,    52,    81,    98,
     142,    81,    38,    18,    40,    19,    67,    46,    12,    14,
     117,   152,   120,   121,   122,   123,   179,    61,   157,   160,
      16,   127,   153,   112,    47,   194,   113,   153,   114,    16,
     143,    55,    32,    42,    18,    16,    43,    30,   115,    81,
     143,   150,    51,    18,   189,    19,    58,   158,    53,    18,
     186,    43,   104,   188,    59,   153,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   128,
     177,    56,   113,    64,   114,   132,   133,   134,   135,   183,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   114,   154,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   106,   155,    84,    85,
      86,   177,   126,   129,   145,   161,   144,   142,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     146,   142,   104,   178,   182,   191,   176,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   149,
     185,   192,    28,    35,    63,   142,    37,   109,     0,     0,
     180,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,     0,   142,    66,     0,     0,     0,   190,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,    87,     0,   193,     0,     0,     0,   142,     0,
       0,     0,     0,     0,    88,   153,    89,    16,    68,     0,
      46,     0,    90,    91,    92,     0,     0,   142,    87,     0,
      54,    18,     0,    43,     0,     0,     0,    93,    94,    95,
      88,    16,    89,     0,    68,     0,     0,     0,    90,    91,
      92,     0,     0,     0,    62,    18,     0,    43,     0,    68,
       0,     0,    16,    93,    94,    95,    69,     0,    70,     0,
       0,    71,    72,    73,    64,    74,    68,     0,    75,    16,
       0,     0,     0,    69,     0,    70,     0,    68,    71,    72,
      73,    64,   107,     0,    69,    75,    70,     0,    68,    71,
      72,    73,    64,   110,     0,    69,    93,    70,     0,    68,
      71,    72,    73,    64,   147,     0,    69,    93,    70,     0,
       0,    71,    72,    73,    64,     0,     0,     0,    93
};

static const yytype_int16 yycheck[] =
{
      16,    64,    79,   112,    32,    38,    15,    22,    81,    20,
       1,     0,     1,    60,    16,    78,    79,    26,    22,   128,
      67,    36,     0,    96,    39,    27,    34,    38,    56,     1,
       1,    22,   109,    61,    38,     1,    64,    52,     3,     4,
       5,     6,     7,     8,    35,    36,   109,    38,    37,   158,
      78,   124,   125,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    37,    16,    38,    34,    22,
      22,    10,    20,    21,   151,    40,    35,   154,    20,    22,
      21,    20,    35,    36,    38,    38,    38,    35,   151,    73,
      40,   154,    35,    36,    35,    38,    16,    21,     7,     8,
      84,    16,    86,    87,    88,    89,    16,    27,   124,   125,
      22,    95,    27,    15,    20,   192,    18,    27,    20,    22,
     104,    38,    15,    35,    36,    22,    38,    20,    30,   192,
     114,   115,    35,    36,    16,    38,    21,    15,    35,    36,
     156,    38,    20,   159,    38,    27,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,    15,
     144,    15,    18,    34,    20,     5,     6,     7,     8,   153,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    20,    16,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    38,    16,    15,    15,
      15,   185,    15,    26,    26,    16,    20,    40,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      38,    40,    20,    26,    26,    26,    21,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    38,
      20,    29,    14,    20,    56,    40,    20,    78,    -1,    -1,
      26,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    40,    61,    -1,    -1,    -1,    21,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     3,    -1,    16,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    15,    27,    17,    22,    19,    -1,
      21,    -1,    23,    24,    25,    -1,    -1,    40,     3,    -1,
      35,    36,    -1,    38,    -1,    -1,    -1,    38,    39,    40,
      15,    22,    17,    -1,    19,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    -1,    35,    36,    -1,    38,    -1,    19,
      -1,    -1,    22,    38,    39,    40,    26,    -1,    28,    -1,
      -1,    31,    32,    33,    34,    35,    19,    -1,    38,    22,
      -1,    -1,    -1,    26,    -1,    28,    -1,    19,    31,    32,
      33,    34,    35,    -1,    26,    38,    28,    -1,    19,    31,
      32,    33,    34,    35,    -1,    26,    38,    28,    -1,    19,
      31,    32,    33,    34,    35,    -1,    26,    38,    28,    -1,
      -1,    31,    32,    33,    34,    -1,    -1,    -1,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    37,    45,    46,    47,    38,     1,    38,     0,
      34,    48,    48,     1,    48,     1,    22,    35,    36,    38,
      49,    50,    51,    52,    53,    54,    55,    56,    47,    35,
      20,    74,    15,    74,    35,    50,    51,    52,    35,    51,
      54,    56,    35,    38,    55,    38,    21,    20,    53,    57,
      58,    35,    51,    35,    35,    38,    15,    26,    21,    38,
      16,    27,    35,    57,    34,    59,    58,    16,    19,    26,
      28,    31,    32,    33,    35,    38,    53,    59,    60,    61,
      62,    63,    65,    59,    15,    15,    15,     3,    15,    17,
      23,    24,    25,    38,    39,    40,    63,    66,    67,    68,
      69,    70,    71,    72,    20,    73,    38,    35,    53,    61,
      35,    62,    15,    18,    20,    30,    73,    67,    64,    67,
      67,    67,    67,    67,    22,    38,    15,    67,    15,    26,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    40,    67,    20,    26,    38,    35,    64,    38,
      67,    16,    16,    27,    16,    16,    73,    74,    15,    73,
      74,    16,    64,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    21,    67,    26,    16,
      26,    62,    26,    67,    62,    20,    74,    64,    74,    16,
      21,    26,    29,    16,    62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    47,    47,    47,    47,    47,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    49,    49,
      50,    50,    51,    51,    52,    53,    53,    53,    53,    54,
      55,    56,    56,    57,    57,    57,    58,    59,    59,    59,
      59,    60,    60,    61,    61,    62,    62,    62,    62,    62,
      62,    62,    62,    63,    63,    63,    63,    63,    64,    64,
      64,    65,    65,    66,    66,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    69,    69,    69,    70,    70,
      70,    70,    70,    70,    71,    71,    71,    72,    72,    72,
      72,    73,    73,    74,    74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     3,     3,     3,     3,     3,
       5,     4,     3,     2,     4,     3,     4,     3,     1,     2,
       1,     2,     1,     2,     3,     1,     1,     2,     2,     5,
       6,     1,     1,     0,     1,     3,     2,     2,     3,     3,
       4,     3,     4,     1,     2,     1,     4,     5,     5,     1,
       5,     3,     1,     1,     1,     3,     2,     2,     0,     1,
       3,     5,     7,     0,     1,     1,     1,     1,     4,     3,
       1,     1,     1,     1,     1,     3,     5,     2,     3,     4,
       3,     2,     3,     4,     3,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     2,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 86 "program6.y" /* yacc.c:1646  */
    {head=(yyval.n_type);}
#line 1467 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 87 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type)=(yyvsp[0].n_type);
  }
#line 1475 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 92 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ClassDeclaration((yyvsp[-1].n_type),(yyvsp[0].n_type),NULL,(yyvsp[-2].str));
  }
#line 1483 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 95 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ClassDeclaration((yyvsp[0].n_type),NULL,NULL,(yyvsp[-1].str));
  }
#line 1491 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 98 "program6.y" /* yacc.c:1646  */
    {
    yyerrok;
    cout<<"Error in classDeclaration"<<endl;
    (yyval.n_type)=new ClassDeclaration(NULL,NULL,NULL,"error");
  }
#line 1501 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 103 "program6.y" /* yacc.c:1646  */
    {
    yyerrok;
    cout<<"Error in classDeclaration"<<endl;
    (yyval.n_type)=new ClassDeclaration(NULL,NULL,NULL,"error");
  }
#line 1511 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 108 "program6.y" /* yacc.c:1646  */
    {
    yyerrok;
    cout<<"Error in classDeclaration"<<endl;
    (yyval.n_type)=new ClassDeclaration(NULL,NULL,NULL,"error");
  }
#line 1521 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 115 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ClassBody((yyvsp[-1].n_type),NULL,NULL,"3");
  }
#line 1529 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 118 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ClassBody((yyvsp[-3].n_type),(yyvsp[-2].n_type),(yyvsp[-1].n_type),"");
  }
#line 1537 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 121 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ClassBody((yyvsp[-2].n_type),(yyvsp[-1].n_type),NULL,"3");
  }
#line 1545 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 124 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ClassBody((yyvsp[-1].n_type),NULL,NULL,"2");
  }
#line 1553 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 127 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ClassBody(NULL,NULL,NULL,"");
  }
#line 1561 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 130 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ClassBody((yyvsp[-2].n_type),(yyvsp[-1].n_type),NULL,"1");
  }
#line 1569 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 133 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ClassBody((yyvsp[-1].n_type),NULL,NULL,"1");
  }
#line 1577 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 136 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ClassBody((yyvsp[-2].n_type),(yyvsp[-1].n_type),NULL,"2");
  }
#line 1585 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 139 "program6.y" /* yacc.c:1646  */
    {
    yyerrok;
    cout << "Error in classBody"<<endl;
    (yyval.n_type) = new ClassBody(NULL,NULL,NULL,"error");
  }
#line 1595 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 146 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ClassBodyMoreVar((yyvsp[0].n_type),NULL,NULL,"");
  }
#line 1603 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 149 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ClassBodyMoreVar((yyvsp[-1].n_type),(yyvsp[0].n_type),NULL,"");
  }
#line 1611 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 154 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ClassBodyMoreConst((yyvsp[0].n_type),NULL,NULL,"");
  }
#line 1619 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 157 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ClassBodyMoreConst((yyvsp[-1].n_type),(yyvsp[0].n_type),NULL,"");
  }
#line 1627 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 162 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ClassBodyMoreMethod((yyvsp[0].n_type),NULL,NULL,"");
  }
#line 1635 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 165 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ClassBodyMoreMethod((yyvsp[-1].n_type),(yyvsp[0].n_type),NULL,"");
  }
#line 1643 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 170 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new VarDeclaration((yyvsp[-2].n_type),NULL,NULL,(yyvsp[-1].str));
  }
#line 1651 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 175 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Type(NULL,NULL,NULL,"1","");
  }
#line 1659 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 178 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Type(NULL,NULL,NULL,(yyvsp[0].str),"");
  }
#line 1667 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 181 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Type((yyvsp[0].n_type),NULL,NULL,"1","");
  }
#line 1675 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 184 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Type((yyvsp[0].n_type),NULL,NULL,(yyvsp[-1].str),"1");
  }
#line 1683 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 189 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ConstructorDeclaration((yyvsp[-2].n_type),(yyvsp[0].n_type),NULL,(yyvsp[-4].str));
  }
#line 1691 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 194 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new MethodDeclaration((yyvsp[-5].n_type),(yyvsp[-2].n_type),(yyvsp[0].n_type),(yyvsp[-4].str));
  }
#line 1699 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 199 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ResultType((yyvsp[0].n_type),NULL,NULL,"");
  }
#line 1707 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 202 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ResultType(NULL,NULL,NULL,"void");
  }
#line 1715 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 207 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ParameterList(NULL,NULL,NULL,"");
  }
#line 1723 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 210 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ParameterList((yyvsp[0].n_type),NULL,NULL,"");
  }
#line 1731 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 213 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ParameterList((yyvsp[-2].n_type),(yyvsp[0].n_type),NULL,",");
  }
#line 1739 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 218 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Parameter((yyvsp[-1].n_type),NULL,NULL,(yyvsp[0].str));
  }
#line 1747 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 223 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Block(NULL,NULL,NULL,"");
  }
#line 1755 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 226 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Block((yyvsp[-1].n_type),NULL,NULL,"<LocalVarDeclaration>");
  }
#line 1763 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 229 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Block((yyvsp[-1].n_type),NULL,NULL,"<Statement>");
  }
#line 1771 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 232 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Block((yyvsp[-2].n_type),(yyvsp[-1].n_type),NULL,"");
  }
#line 1779 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 236 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new LocalVarDeclaration((yyvsp[-2].n_type),NULL,NULL,(yyvsp[-1].str));
  }
#line 1787 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 239 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new LocalVarDeclaration((yyvsp[-3].n_type),(yyvsp[-2].n_type),NULL,(yyvsp[-1].str));
  }
#line 1795 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 245 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new StatementMore((yyvsp[0].n_type),NULL,NULL,"");
  }
#line 1803 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 248 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new StatementMore((yyvsp[-1].n_type),(yyvsp[0].n_type),NULL,"");
  }
#line 1811 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 253 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Statement(NULL,NULL,NULL,";");
  }
#line 1819 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 256 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Statement((yyvsp[-3].n_type),(yyvsp[-1].n_type),NULL,"1");
  }
#line 1827 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 259 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Statement((yyvsp[-4].n_type),(yyvsp[-2].n_type),NULL,"2");
  }
#line 1835 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 262 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Statement((yyvsp[-2].n_type),NULL,NULL,"2");
  }
#line 1843 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 265 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Statement((yyvsp[0].n_type),NULL,NULL,"3");
  }
#line 1851 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 268 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Statement((yyvsp[-2].n_type),(yyvsp[0].n_type),NULL,"5");
  }
#line 1859 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 271 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Statement((yyvsp[-1].n_type),NULL,NULL,"4");
  }
#line 1867 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 274 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Statement((yyvsp[0].n_type),NULL,NULL,"5");
  }
#line 1875 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 280 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type)= new Name(NULL,NULL,NULL,"this","");
  }
#line 1883 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 283 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type)= new Name(NULL,NULL,NULL,(yyvsp[0].str),"1");
  }
#line 1891 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 286 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Name((yyvsp[-2].n_type),NULL,NULL,".",(yyvsp[0].str));
  }
#line 1899 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 289 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Name((yyvsp[-1].n_type),(yyvsp[0].n_type),NULL,"","");
  }
#line 1907 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 292 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Name((yyvsp[0].n_type),NULL,NULL,(yyvsp[-1].str),"");
  }
#line 1915 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 298 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Arglist(NULL,NULL,NULL,"");
  }
#line 1923 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 301 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Arglist((yyvsp[0].n_type),NULL,NULL,"");
  }
#line 1931 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 304 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Arglist((yyvsp[-2].n_type),(yyvsp[0].n_type),NULL,",");
  }
#line 1939 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 309 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ConditionalStatement((yyvsp[-2].n_type),(yyvsp[0].n_type),NULL,"if()");
  }
#line 1947 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 312 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new ConditionalStatement((yyvsp[-4].n_type),(yyvsp[-2].n_type),(yyvsp[0].n_type),"if()else");
  }
#line 1955 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 317 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new OptionalExpression(NULL,NULL,NULL,"");
  }
#line 1963 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 320 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new OptionalExpression((yyvsp[0].n_type),NULL,NULL,"");
  }
#line 1971 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 325 "program6.y" /* yacc.c:1646  */
    {
    //cout <<  "expr -> ID : " << $1 << endl;
    (yyval.n_type)= new Expression((yyvsp[0].n_type),NULL,NULL,"<Name>");
  }
#line 1980 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 329 "program6.y" /* yacc.c:1646  */
    {
    //cout << "expr -> NUM : " << $1 << endl;
    (yyval.n_type) = new Number(NULL,NULL,NULL,(yyvsp[0].str));
  }
#line 1989 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 333 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Expression(NULL,NULL,NULL,"null");
  }
#line 1997 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 336 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Expression((yyvsp[-3].n_type),(yyvsp[-1].n_type),NULL,"<Name> ( )");
  }
#line 2005 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 339 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Expression(NULL,NULL,NULL,"read ( )");
  }
#line 2013 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 342 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new Expression((yyvsp[0].n_type),NULL,NULL,"<NewExpression>");
  }
#line 2021 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 349 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type)=new Expression((yyvsp[-1].n_type),NULL,NULL,"");
  }
#line 2029 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 354 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new NewExpression((yyvsp[-1].n_type),NULL,NULL,(yyvsp[-3].str));
  }
#line 2037 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 357 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new NewExpression(NULL,NULL,NULL,"1");
  }
#line 2045 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 360 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new NewExpression((yyvsp[0].n_type),NULL,NULL,"1");
  }
#line 2053 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 363 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new NewExpression((yyvsp[-1].n_type),(yyvsp[0].n_type),NULL,"");
  }
#line 2061 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 366 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new NewExpression((yyvsp[0].n_type),NULL,NULL,"2");
  }
#line 2069 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 369 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new NewExpression(NULL,NULL,NULL,(yyvsp[0].str));
  }
#line 2077 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 372 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new NewExpression(NULL,(yyvsp[0].n_type),NULL,(yyvsp[-1].str));
  }
#line 2085 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 375 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new NewExpression((yyvsp[-1].n_type),(yyvsp[0].n_type),NULL,(yyvsp[-2].str));
  }
#line 2093 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 378 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new NewExpression(NULL,NULL,(yyvsp[0].n_type),(yyvsp[-1].str));
  }
#line 2101 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 383 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new UnaryOp((yyvsp[0].n_type),NULL,"-");
  }
#line 2109 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 386 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new UnaryOp((yyvsp[0].n_type),NULL,"+");
  }
#line 2117 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 389 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new UnaryOp((yyvsp[0].n_type),NULL,"!");
  }
#line 2125 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 394 "program6.y" /* yacc.c:1646  */
    {
    //$1->print(); cout << " -EQ exp- ";
    //$3->print(); cout << endl;
    (yyval.n_type)=new RelationOp((yyvsp[-2].n_type),(yyvsp[0].n_type),NULL,"==");
  }
#line 2135 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 399 "program6.y" /* yacc.c:1646  */
    {
    //$1->print(); cout << " -NE exp- ";
    //$3->print(); cout << endl;
    (yyval.n_type)=new RelationOp((yyvsp[-2].n_type),(yyvsp[0].n_type),NULL,"!=");
  }
#line 2145 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 404 "program6.y" /* yacc.c:1646  */
    {
    //$1->print(); cout << " -GE exp- ";
    //$3->print(); cout << endl;
    (yyval.n_type)=new RelationOp((yyvsp[-2].n_type),(yyvsp[0].n_type),NULL,">=");
  }
#line 2155 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 409 "program6.y" /* yacc.c:1646  */
    {
    //$1->print(); cout << " -LE exp- ";
    //$3->print(); cout << endl;
    (yyval.n_type)=new RelationOp((yyvsp[-2].n_type),(yyvsp[0].n_type),NULL,"<=");
  }
#line 2165 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 414 "program6.y" /* yacc.c:1646  */
    {
    //$1->print(); cout << " -GT exp- ";
    //$3->print(); cout << endl;
    (yyval.n_type)=new RelationOp((yyvsp[-2].n_type),(yyvsp[0].n_type),NULL,">");
  }
#line 2175 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 419 "program6.y" /* yacc.c:1646  */
    {
    //$1->print(); cout << " -LT exp- ";
    //$3->print(); cout << endl;
    (yyval.n_type)=new RelationOp((yyvsp[-2].n_type),(yyvsp[0].n_type),NULL,"<");
  }
#line 2185 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 426 "program6.y" /* yacc.c:1646  */
    {
    //$1->print(); cout << " -PLUS exp- ";
    //$3->print(); cout << endl;
    (yyval.n_type)=new SumOp((yyvsp[-2].n_type),(yyvsp[0].n_type),NULL,"+");
  }
#line 2195 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 431 "program6.y" /* yacc.c:1646  */
    {
    //$1->print(); cout << " -MINUS exp- ";
    //$3->print(); cout << endl;
    (yyval.n_type)=new SumOp((yyvsp[-2].n_type),(yyvsp[0].n_type),NULL,"-");
  }
#line 2205 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 436 "program6.y" /* yacc.c:1646  */
    {
    //$1->print(); cout << " -OR exp- ";
    //$3->print(); cout << endl;
    (yyval.n_type)=new SumOp((yyvsp[-2].n_type),(yyvsp[0].n_type),NULL,"||");
  }
#line 2215 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 443 "program6.y" /* yacc.c:1646  */
    {
    //$1->print(); cout << " -TIMES exp- ";
    //$3->print(); cout << endl;
    (yyval.n_type)=new ProductOp((yyvsp[-2].n_type),(yyvsp[0].n_type),NULL,"*");
  }
#line 2225 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 448 "program6.y" /* yacc.c:1646  */
    {
    //$1->print(); cout << " -DIV exp- ";
    //$3->print(); cout << endl;
    (yyval.n_type)=new ProductOp((yyvsp[-2].n_type),(yyvsp[0].n_type),NULL,"/");
  }
#line 2235 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 453 "program6.y" /* yacc.c:1646  */
    {
    //$1->print(); cout << " -MOD exp- ";
    //$3->print(); cout << endl;
    (yyval.n_type)=new ProductOp((yyvsp[-2].n_type),(yyvsp[0].n_type),NULL,"%");
  }
#line 2245 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 458 "program6.y" /* yacc.c:1646  */
    {
    //$1->print(); cout << " -AND exp- ";
    //$3->print(); cout << endl;
    (yyval.n_type)=new ProductOp((yyvsp[-2].n_type),(yyvsp[0].n_type),NULL,"&&");
  }
#line 2255 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 465 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new BracketExp((yyvsp[-1].n_type),NULL,NULL);
  }
#line 2263 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 468 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new BracketExp((yyvsp[-3].n_type),(yyvsp[-1].n_type),NULL);
  }
#line 2271 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 473 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new MultiBracket(NULL,NULL,"[","]");
  }
#line 2279 "program6_tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 476 "program6.y" /* yacc.c:1646  */
    {
    (yyval.n_type) = new MultiBracket((yyvsp[-2].n_type),NULL,"[","]");
  }
#line 2287 "program6_tab.cpp" /* yacc.c:1646  */
    break;


#line 2291 "program6_tab.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 481 "program6.y" /* yacc.c:1906  */
