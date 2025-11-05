/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
    NUM = 258,                     /* NUM  */
    DEC = 259,                     /* DEC  */
    PRG = 260,                     /* PRG  */
    FUN = 261,                     /* FUN  */
    VAR = 262,                     /* VAR  */
    BIN = 263,                     /* BIN  */
    BOUT = 264,                    /* BOUT  */
    AFF = 265,                     /* AFF  */
    CLN = 266,                     /* CLN  */
    DOT = 267,                     /* DOT  */
    INT = 268,                     /* INT  */
    FLOAT = 269,                   /* FLOAT  */
    VOID = 270,                    /* VOID  */
    ID = 271,                      /* ID  */
    PO = 272,                      /* PO  */
    PF = 273,                      /* PF  */
    PV = 274,                      /* PV  */
    VIR = 275,                     /* VIR  */
    IF = 276,                      /* IF  */
    ELSE = 277,                    /* ELSE  */
    WHILE = 278,                   /* WHILE  */
    AND = 279,                     /* AND  */
    OR = 280,                      /* OR  */
    NOT = 281,                     /* NOT  */
    DIFF = 282,                    /* DIFF  */
    EQUAL = 283,                   /* EQUAL  */
    SUP = 284,                     /* SUP  */
    INF = 285,                     /* INF  */
    PLUS = 286,                    /* PLUS  */
    MOINS = 287,                   /* MOINS  */
    STAR = 288,                    /* STAR  */
    DIV = 289,                     /* DIV  */
    ARR = 290,                     /* ARR  */
    IFX = 291,                     /* IFX  */
    UNA = 292                      /* UNA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUM 258
#define DEC 259
#define PRG 260
#define FUN 261
#define VAR 262
#define BIN 263
#define BOUT 264
#define AFF 265
#define CLN 266
#define DOT 267
#define INT 268
#define FLOAT 269
#define VOID 270
#define ID 271
#define PO 272
#define PF 273
#define PV 274
#define VIR 275
#define IF 276
#define ELSE 277
#define WHILE 278
#define AND 279
#define OR 280
#define NOT 281
#define DIFF 282
#define EQUAL 283
#define SUP 284
#define INF 285
#define PLUS 286
#define MOINS 287
#define STAR 288
#define DIV 289
#define ARR 290
#define IFX 291
#define UNA 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 45 "myp.y"
 
  struct ATTRIBUTE * symbol_value;
  char * string_value;
  int int_value;
  float float_value;
  int type_value;
  int label_value;
  int offset_value;

#line 151 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
