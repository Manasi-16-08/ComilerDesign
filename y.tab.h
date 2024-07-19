/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TOKEN_INT = 258,               /* TOKEN_INT  */
    TOKEN_CHAR = 259,              /* TOKEN_CHAR  */
    TOKEN_FLOAT = 260,             /* TOKEN_FLOAT  */
    TOKEN_DOUBLE = 261,            /* TOKEN_DOUBLE  */
    TOKEN_VOID = 262,              /* TOKEN_VOID  */
    TOKEN_IF = 263,                /* TOKEN_IF  */
    TOKEN_ELSE = 264,              /* TOKEN_ELSE  */
    TOKEN_DO = 265,                /* TOKEN_DO  */
    TOKEN_WHILE = 266,             /* TOKEN_WHILE  */
    TOKEN_FOR = 267,               /* TOKEN_FOR  */
    TOKEN_SWITCH = 268,            /* TOKEN_SWITCH  */
    TOKEN_CASE = 269,              /* TOKEN_CASE  */
    TOKEN_BREAK = 270,             /* TOKEN_BREAK  */
    TOKEN_MAIN = 271,              /* TOKEN_MAIN  */
    TOKEN_DEFAULT = 272,           /* TOKEN_DEFAULT  */
    TOKEN_INCLUDE = 273,           /* TOKEN_INCLUDE  */
    TOKEN_STR_LITERAL = 274,       /* TOKEN_STR_LITERAL  */
    TOKEN_INC = 275,               /* TOKEN_INC  */
    TOKEN_DEC = 276,               /* TOKEN_DEC  */
    TOKEN_EQ = 277,                /* TOKEN_EQ  */
    TOKEN_NE = 278,                /* TOKEN_NE  */
    TOKEN_LE = 279,                /* TOKEN_LE  */
    TOKEN_GE = 280,                /* TOKEN_GE  */
    TOKEN_AND = 281,               /* TOKEN_AND  */
    TOKEN_OR = 282,                /* TOKEN_OR  */
    TOKEN_NUM = 283,               /* TOKEN_NUM  */
    TOKEN_HEADER = 284,            /* TOKEN_HEADER  */
    TOKEN_ID = 285,                /* TOKEN_ID  */
    TOKEN_CHAR_LITERAL = 286       /* TOKEN_CHAR_LITERAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define TOKEN_INT 258
#define TOKEN_CHAR 259
#define TOKEN_FLOAT 260
#define TOKEN_DOUBLE 261
#define TOKEN_VOID 262
#define TOKEN_IF 263
#define TOKEN_ELSE 264
#define TOKEN_DO 265
#define TOKEN_WHILE 266
#define TOKEN_FOR 267
#define TOKEN_SWITCH 268
#define TOKEN_CASE 269
#define TOKEN_BREAK 270
#define TOKEN_MAIN 271
#define TOKEN_DEFAULT 272
#define TOKEN_INCLUDE 273
#define TOKEN_STR_LITERAL 274
#define TOKEN_INC 275
#define TOKEN_DEC 276
#define TOKEN_EQ 277
#define TOKEN_NE 278
#define TOKEN_LE 279
#define TOKEN_GE 280
#define TOKEN_AND 281
#define TOKEN_OR 282
#define TOKEN_NUM 283
#define TOKEN_HEADER 284
#define TOKEN_ID 285
#define TOKEN_CHAR_LITERAL 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
