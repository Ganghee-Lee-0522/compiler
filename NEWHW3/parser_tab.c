
/*  A Bison parser, made from parser.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	TIDEN	258
#define	TNUMBER	259
#define	TCONST	260
#define	TELSE	261
#define	TIF	262
#define	TINT	263
#define	TFLOAT	264
#define	TFLOATNUM	265
#define	TRETURN	266
#define	TVOID	267
#define	TWHILE	268
#define	TADDASSIGN	269
#define	TSUBASSIGN	270
#define	TMULASSIGN	271
#define	TDIVASSIGN	272
#define	TMODASSIGN	273
#define	TOR	274
#define	TAND	275
#define	TEQUAL	276
#define	TNOTEQU	277
#define	TGREAT	278
#define	TLESS	279
#define	TGREATE	280
#define	TLESSE	281
#define	TINC	282
#define	TDEC	283
#define	TPLUS	284
#define	TMINUS	285
#define	TMULTIPLY	286
#define	TDIVIDE	287
#define	TMOD	288
#define	TNOT	289
#define	TASSIGN	290
#define	TLPAREN	291
#define	TRPAREN	292
#define	TCOMMA	293
#define	TSEMICOLON	294
#define	TLBRACKET	295
#define	TRBRACKET	296
#define	TLBRACE	297
#define	TRBRACE	298
#define	TILLIDENT	299
#define	TLONG	300
#define	TOVER	301
#define	LOWER_THEN_ELSE	302

#line 1 "parser.y"

/*
* parser.y - yacc source for the MiniC
* Programmer - 최윤지 윤지윤 이강희
* date -  06 / 01 / 2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <malloc.h>

#include "glob.h"

 int type_int=0;
 int type_float=0;
 int type_void=0;
 int param_int=0;



extern reporterror();
extern yylex();
extern yyerror(s);


#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		173
#define	YYFLAG		-32768
#define	YYNTBASE	48

#define YYTRANSLATE(x) ((unsigned)(x) <= 302 ? yytranslate[x] : 93)

static const char yytranslate[] = {     0,
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
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     4,     7,     9,    11,    14,    17,    20,    23,
    26,    30,    32,    34,    37,    39,    41,    43,    45,    47,
    49,    51,    53,    55,    57,    61,    63,    64,    66,    70,
    73,    78,    83,    85,    86,    88,    91,    95,    99,   101,
   105,   107,   111,   115,   117,   122,   127,   129,   131,   133,
   135,   136,   138,   139,   141,   144,   147,   149,   151,   153,
   155,   157,   160,   163,   165,   166,   172,   180,   186,   190,
   192,   194,   198,   202,   206,   210,   214,   218,   220,   224,
   226,   230,   232,   236,   240,   242,   246,   250,   254,   258,
   260,   264,   268,   270,   274,   278,   282,   284,   287,   290,
   293,   296,   298,   303,   308,   311,   314,   316,   317,   319,
   321,   325,   327,   329,   331
};

static const short yyrhs[] = {    49,
     0,    50,     0,    49,    50,     0,    51,     0,    66,     0,
     3,    39,     0,     3,     1,     0,    52,    63,     0,    52,
    39,     0,    52,     1,     0,    53,    58,    59,     0,    54,
     0,    55,     0,    54,    55,     0,    56,     0,    57,     0,
     5,     0,     8,     0,    12,     0,     9,     0,     3,     0,
    44,     0,    45,     0,    46,     0,    36,    60,    37,     0,
    61,     0,     0,    62,     0,    61,    38,    62,     0,    53,
    69,     0,    42,    64,    71,    43,     0,    42,    64,    71,
     1,     0,    65,     0,     0,    66,     0,    65,    66,     0,
    53,    67,    39,     0,    53,    67,     1,     0,    68,     0,
    67,    38,    68,     0,    69,     0,    69,    35,     4,     0,
    69,    35,    10,     0,     3,     0,     3,    40,    70,    41,
     0,     3,    40,    70,     1,     0,    44,     0,    45,     0,
     4,     0,    10,     0,     0,    72,     0,     0,    73,     0,
    72,    73,     0,    72,    66,     0,    63,     0,    74,     0,
    76,     0,    77,     0,    78,     0,    75,    39,     0,    79,
     1,     0,    79,     0,     0,     7,    36,    79,    37,    73,
     0,     7,    36,    79,    37,    73,     6,    73,     0,    13,
    36,    79,    37,    73,     0,    11,    75,    39,     0,    80,
     0,    81,     0,    87,    35,    80,     0,    87,    14,    80,
     0,    87,    15,    80,     0,    87,    16,    80,     0,    87,
    17,    80,     0,    87,    18,    80,     0,    82,     0,    81,
    19,    82,     0,    83,     0,    82,    20,    83,     0,    84,
     0,    83,    21,    84,     0,    83,    22,    84,     0,    85,
     0,    84,    23,    85,     0,    84,    24,    85,     0,    84,
    25,    85,     0,    84,    26,    85,     0,    86,     0,    85,
    29,    86,     0,    85,    30,    86,     0,    87,     0,    86,
    31,    87,     0,    86,    32,    87,     0,    86,    33,    87,
     0,    88,     0,    30,    87,     0,    34,    87,     0,    27,
    87,     0,    28,    87,     0,    92,     0,    88,    40,    79,
    41,     0,    88,    36,    89,    37,     0,    88,    27,     0,
    88,    28,     0,    90,     0,     0,    91,     0,    80,     0,
    91,    38,    80,     0,     3,     0,     4,     0,    10,     0,
    36,    79,    37,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    40,    42,    43,    45,    46,    47,    48,    55,    56,    57,
    68,    70,    72,    73,    75,    76,    78,    83,    84,    85,
    88,   111,   112,   113,   118,   120,   121,   123,   124,   128,
   141,   142,   148,   149,   151,   152,   154,   160,   169,   170,
   172,   173,   174,   176,   193,   205,   209,   210,   213,   214,
   215,   218,   219,   221,   222,   223,   225,   226,   227,   228,
   229,   231,   232,   238,   239,   241,   242,   244,   246,   248,
   250,   251,   252,   253,   254,   255,   256,   258,   259,   261,
   262,   264,   265,   266,   268,   269,   270,   271,   272,   274,
   275,   276,   278,   279,   280,   281,   283,   284,   285,   286,
   287,   289,   290,   291,   292,   293,   295,   296,   298,   300,
   301,   303,   309,   310,   311
};

static const char * const yytname[] = {   "$","error","$undefined.","TIDEN",
"TNUMBER","TCONST","TELSE","TIF","TINT","TFLOAT","TFLOATNUM","TRETURN","TVOID",
"TWHILE","TADDASSIGN","TSUBASSIGN","TMULASSIGN","TDIVASSIGN","TMODASSIGN","TOR",
"TAND","TEQUAL","TNOTEQU","TGREAT","TLESS","TGREATE","TLESSE","TINC","TDEC",
"TPLUS","TMINUS","TMULTIPLY","TDIVIDE","TMOD","TNOT","TASSIGN","TLPAREN","TRPAREN",
"TCOMMA","TSEMICOLON","TLBRACKET","TRBRACKET","TLBRACE","TRBRACE","TILLIDENT",
"TLONG","TOVER","LOWER_THEN_ELSE","mini_c","translation_unit","external_dcl",
"function_def","function_header","dcl_spec","dcl_specifiers","dcl_specifier",
"type_qualifier","type_specifier","function_name","formal_param","opt_formal_param",
"formal_param_list","param_dcl","compound_st","opt_dcl_list","declaration_list",
"declaration","init_dcl_list","init_declarator","declarator","opt_number","opt_stat_list",
"statement_list","statement","expression_st","opt_expression","if_st","while_st",
"return_st","expression","assignment_exp","logical_or_exp","logical_and_exp",
"equality_exp","relational_exp","additive_exp","multiplicative_exp","unary_exp",
"postfix_exp","opt_actual_param","actual_param","actual_param_list","primary_exp",
""
};
#endif

static const short yyr1[] = {     0,
    48,    49,    49,    50,    50,    50,    50,    51,    51,    51,
    52,    53,    54,    54,    55,    55,    56,    57,    57,    57,
    58,    58,    58,    58,    59,    60,    60,    61,    61,    62,
    63,    63,    64,    64,    65,    65,    66,    66,    67,    67,
    68,    68,    68,    69,    69,    69,    69,    69,    70,    70,
    70,    71,    71,    72,    72,    72,    73,    73,    73,    73,
    73,    74,    74,    75,    75,    76,    76,    77,    78,    79,
    80,    80,    80,    80,    80,    80,    80,    81,    81,    82,
    82,    83,    83,    83,    84,    84,    84,    84,    84,    85,
    85,    85,    86,    86,    86,    86,    87,    87,    87,    87,
    87,    88,    88,    88,    88,    88,    89,    89,    90,    91,
    91,    92,    92,    92,    92
};

static const short yyr2[] = {     0,
     1,     1,     2,     1,     1,     2,     2,     2,     2,     2,
     3,     1,     1,     2,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     3,     1,     0,     1,     3,     2,
     4,     4,     1,     0,     1,     2,     3,     3,     1,     3,
     1,     3,     3,     1,     4,     4,     1,     1,     1,     1,
     0,     1,     0,     1,     2,     2,     1,     1,     1,     1,
     1,     2,     2,     1,     0,     5,     7,     5,     3,     1,
     1,     3,     3,     3,     3,     3,     3,     1,     3,     1,
     3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
     3,     3,     1,     3,     3,     3,     1,     2,     2,     2,
     2,     1,     4,     4,     2,     2,     1,     0,     1,     1,
     3,     1,     1,     1,     3
};

static const short yydefact[] = {     0,
     0,    17,    18,    20,    19,     1,     2,     4,     0,     0,
    12,    13,    15,    16,     5,     7,     6,     3,    10,     9,
    34,     8,    44,    47,    48,    24,     0,     0,    39,    41,
    14,     0,    53,    33,    35,    51,    27,    11,    38,     0,
    37,     0,    44,    47,    48,   112,   113,     0,   114,    65,
     0,     0,     0,     0,     0,     0,    57,     0,    52,    54,
    58,     0,    59,    60,    61,     0,    70,    71,    78,    80,
    82,    85,    90,    93,    97,   102,    36,    49,    50,     0,
     0,     0,    26,    28,    40,    42,    43,     0,     0,    64,
     0,   100,   101,    98,    99,     0,    32,    31,    56,    55,
    62,    63,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   105,   106,   108,     0,    46,    45,    30,    25,     0,
     0,    69,     0,   115,    79,    93,    81,    83,    84,    86,
    87,    88,    89,    91,    92,    94,    95,    96,    73,    74,
    75,    76,    77,    72,   110,     0,   107,   109,     0,    29,
    65,    65,   104,     0,   103,    66,    68,   111,    65,    67,
     0,     0,     0
};

static const short yydefgoto[] = {   171,
     6,     7,     8,     9,    32,    11,    12,    13,    14,    27,
    38,    82,    83,    84,    57,    33,    34,    15,    28,    29,
    30,    80,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
   156,   157,   158,    76
};

static const short yypact[] = {   150,
    18,-32768,-32768,-32768,-32768,   150,-32768,-32768,     2,     1,
    30,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    30,-32768,   -19,   -31,   -20,-32768,   -14,    14,-32768,    -1,
-32768,     4,   105,    30,-32768,    81,    30,-32768,-32768,     4,
-32768,    82,    60,-32768,-32768,-32768,-32768,    23,-32768,   139,
    66,   139,   139,   139,   139,   139,-32768,    12,    71,-32768,
-32768,    67,-32768,-32768,-32768,    19,-32768,    98,   103,    29,
    64,    90,   132,    79,    -4,-32768,-32768,-32768,-32768,    13,
     4,    87,    96,-32768,-32768,-32768,-32768,   139,    99,-32768,
   139,-32768,-32768,-32768,-32768,   113,-32768,-32768,-32768,-32768,
-32768,-32768,   139,   139,   139,   139,   139,   139,   139,   139,
   139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
   139,-32768,-32768,   139,   139,-32768,-32768,-32768,-32768,    30,
   114,-32768,   119,-32768,   103,-32768,    29,    64,    64,    90,
    90,    90,    90,   132,   132,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   120,-32768,   102,   127,-32768,
   118,   118,-32768,   139,-32768,   155,-32768,-32768,   118,-32768,
   170,   171,-32768
};

static const short yypgoto[] = {-32768,
-32768,   166,-32768,-32768,     0,-32768,   163,-32768,-32768,-32768,
-32768,-32768,-32768,    50,   172,-32768,-32768,    -3,-32768,   142,
   104,-32768,-32768,-32768,   -58,-32768,   133,-32768,-32768,-32768,
   -48,   -91,-32768,    83,    80,    21,    69,    25,   -43,-32768,
-32768,-32768,-32768,-32768
};


#define	YYLAST		186


static const short yytable[] = {    10,
   100,    90,    19,    23,   -22,    10,    43,    96,    92,    93,
    94,    95,    97,   126,    39,   -23,   -21,    35,    16,   102,
    36,    37,   122,   123,   149,   150,   151,   152,   153,   154,
    77,   124,   155,    42,     2,   125,    81,     3,     4,   131,
    20,     5,   133,    21,    24,    25,    26,    44,    45,   105,
   106,    40,    41,   127,    98,    99,    17,   -64,    88,   136,
   136,   136,   136,   136,   136,   136,   136,   136,   136,   146,
   147,   148,   168,    46,    47,     2,   159,    48,     3,     4,
    49,    50,     5,    51,    78,    86,   107,   108,   109,   110,
    79,    87,   116,   117,   118,   119,   120,    52,    53,    36,
    54,    91,   166,   167,    55,   101,    56,    46,    47,   -65,
   170,    48,    21,   121,    49,    50,   103,    51,   111,   112,
    46,    47,   104,   129,    48,   138,   139,    49,    50,    81,
    51,    52,    53,   130,    54,   144,   145,   132,    55,   164,
    56,    46,    47,   -65,    52,    53,    21,    54,    49,   134,
   161,    55,     1,    56,     2,   162,   163,     3,     4,    21,
   169,     5,   113,   114,   115,    52,    53,   165,    54,   172,
   173,    18,    55,    31,    56,   140,   141,   142,   143,   160,
    22,    85,    89,   137,   128,   135
};

static const short yycheck[] = {     0,
    59,    50,     1,     3,    36,     6,     3,    56,    52,    53,
    54,    55,     1,     1,     1,    36,    36,    21,     1,     1,
    40,    36,    27,    28,   116,   117,   118,   119,   120,   121,
    34,    36,   124,    35,     5,    40,    37,     8,     9,    88,
    39,    12,    91,    42,    44,    45,    46,    44,    45,    21,
    22,    38,    39,    41,    43,    59,    39,    39,    36,   103,
   104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
   114,   115,   164,     3,     4,     5,   125,     7,     8,     9,
    10,    11,    12,    13,     4,     4,    23,    24,    25,    26,
    10,    10,    14,    15,    16,    17,    18,    27,    28,    40,
    30,    36,   161,   162,    34,    39,    36,     3,     4,    39,
   169,     7,    42,    35,    10,    11,    19,    13,    29,    30,
     3,     4,    20,    37,     7,   105,   106,    10,    11,   130,
    13,    27,    28,    38,    30,   111,   112,    39,    34,    38,
    36,     3,     4,    39,    27,    28,    42,    30,    10,    37,
    37,    34,     3,    36,     5,    37,    37,     8,     9,    42,
     6,    12,    31,    32,    33,    27,    28,    41,    30,     0,
     0,     6,    34,    11,    36,   107,   108,   109,   110,   130,
     9,    40,    50,   104,    81,   103
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 192 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#else
#define YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#endif

int
yyparse(YYPARSE_PARAM)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 7:
#line 49 "parser.y"
{
              yyerrok;
             reporterror(wrong_st); /* error - wrong statement */
       ;
    break;}
case 10:
#line 58 "parser.y"
{

                   /* 에러 발생시 tuple 수정을 위해 default값 0세팅 */
                   /* identifier about parse error */
                    look_tmp->type=0;
                    yyerrok;
                    /* error - wrong function definition */
                    reporterror(wrong_funcdef);
                  ;
    break;}
case 18:
#line 83 "parser.y"
{type_int=1;;
    break;}
case 19:
#line 84 "parser.y"
{type_void=1;;
    break;}
case 20:
#line 85 "parser.y"
{type_float=1;;
    break;}
case 21:
#line 90 "parser.y"
{

                /* identifier about parse error or not defined identifier/function*/
                  if(look_id->type==0||look_id->type==5){


                        if(type_void==1){
                              look_id->type=4; /* function, return type=void */
                        }else if(type_int==1){
                              look_id->type=6; /* function, return type=int */
                        }else if(type_float==1){
                              look_id->type=8; /* function, return type=float */
                        }
                        type_int=0;
                        type_void=0;
                        type_float=0;
                        look_tmp=look_id;
                  }
                  ;
    break;}
case 30:
#line 128 "parser.y"
{
                  if(type_int==1){ /* int의 경우 */
                        param_int=1;
                        look_id->type=7;  /* integer scalar parameter */
                  }
                  type_int=0;
                  type_void=0;
                  type_float=0;
                  param_int=0;


;
    break;}
case 32:
#line 143 "parser.y"
{
                        yyerrok;
                        reporterror(nobrace); /* no brace error */
                  ;
    break;}
case 37:
#line 154 "parser.y"
{
                        type_int=0;
                        type_void=0;
			type_float=0;

                  ;
    break;}
case 38:
#line 160 "parser.y"
{
                        look_tmp->type=0; /* 예상치 못한 에러 발생  */
                        yyerrok;
                        type_int=0;
                        type_void=0;
			type_float=0;
                        reporterror(nosemi); /* no semicolon error */
                  ;
    break;}
case 44:
#line 176 "parser.y"
{
                  if(look_id->type==0){

                        if(type_int==1){
                              look_id->type=1; /* integer scalar variable */
                        }
                        else if(type_void==1){
                              look_id->type=2;  /* void scalar variable */
			}else if(type_float==1){ 
			      look_id->type=8; /* float scalar variable */
				
				}

                  }
                  look_tmp=look_id;

            ;
    break;}
case 45:
#line 194 "parser.y"
{

                  if(look_id->type==0){
                        if(type_int==1)look_id->type=3; /*  integer array variable */
			if(type_float==1)look_id->type=9;  /*  float array variable */

                  }

                   look_tmp=look_id;

            ;
    break;}
case 46:
#line 205 "parser.y"
{
                  yyerrok;
                  reporterror(nobracket); /* no bracket error */
            ;
    break;}
case 63:
#line 233 "parser.y"
{
                        yyerrok;
                        reporterror(nosemi); /* no semicolon error */
                  ;
    break;}
case 112:
#line 304 "parser.y"
{
                  if(look_id->type==0)
                        look_id->type=5; /* not defined identifier/function */

            ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 487 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 314 "parser.y"
