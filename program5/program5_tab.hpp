/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_PROGRAM5_TAB_HPP_INCLUDED
# define YY_YY_PROGRAM5_TAB_HPP_INCLUDED
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
#line 46 "program5.y" /* yacc.c:1909  */

    string *str;
    Node *n_type;
  

#line 104 "program5_tab.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROGRAM5_TAB_HPP_INCLUDED  */
