
/*  A Bison parser, made from parser.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	TIDEN	258
#define	TNUMBER	259
#define	TCONST	260
#define	TELSE	261
#define	TIF	262
#define	TINT	263
#define	TRETURN	264
#define	TVOID	265
#define	TWHILE	266
#define	TADDASSIGN	267
#define	TSUBASSIGN	268
#define	TMULASSIGN	269
#define	TDIVASSIGN	270
#define	TMODASSIGN	271
#define	TOR	272
#define	TAND	273
#define	TEQUAL	274
#define	TNOTEQU	275
#define	TGREAT	276
#define	TLESS	277
#define	TGREATE	278
#define	TLESSE	279
#define	TINC	280
#define	TDEC	281
#define	TPLUS	282
#define	TMINUS	283
#define	TMULTIPLY	284
#define	TDIVIDE	285
#define	TMOD	286
#define	TNOT	287
#define	TASSIGN	288
#define	TLPAREN	289
#define	TRPAREN	290
#define	TCOMMA	291
#define	TSEMICOLON	292
#define	TLBRACKET	293
#define	TRBRACKET	294
#define	TLBRACE	295
#define	TRBRACE	296
#define	TILLIDENT	297
#define	TLONG	298
#define	LOWER_THEN_ELSE	299

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



#define	YYFINAL		167
#define	YYFLAG		-32768
#define	YYNTBASE	45

#define YYTRANSLATE(x) ((unsigned)(x) <= 299 ? yytranslate[x] : 90)

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
    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     4,     7,     9,    11,    14,    17,    20,    23,
    27,    29,    31,    34,    36,    38,    40,    42,    44,    46,
    48,    50,    54,    56,    57,    59,    63,    66,    71,    76,
    78,    79,    81,    84,    88,    92,    94,    98,   100,   104,
   106,   111,   116,   118,   120,   122,   124,   125,   127,   130,
   133,   135,   137,   139,   141,   143,   146,   149,   151,   152,
   158,   166,   172,   176,   178,   180,   184,   188,   192,   196,
   200,   204,   206,   210,   212,   216,   218,   222,   226,   228,
   232,   236,   240,   244,   246,   250,   254,   256,   260,   264,
   268,   270,   273,   276,   279,   282,   284,   289,   294,   297,
   300,   302,   303,   305,   307,   311,   313,   315
};

static const short yyrhs[] = {    46,
     0,    47,     0,    46,    47,     0,    48,     0,    63,     0,
     3,    37,     0,    49,    60,     0,    49,    37,     0,    49,
     1,     0,    50,    55,    56,     0,    51,     0,    52,     0,
    51,    52,     0,    53,     0,    54,     0,     5,     0,     8,
     0,    10,     0,     3,     0,    42,     0,    43,     0,    34,
    57,    35,     0,    58,     0,     0,    59,     0,    58,    36,
    59,     0,    50,    66,     0,    40,    61,    68,    41,     0,
    40,    61,    68,     1,     0,    62,     0,     0,    63,     0,
    62,    63,     0,    50,    64,    37,     0,    50,    64,     1,
     0,    65,     0,    64,    36,    65,     0,    66,     0,    66,
    33,     4,     0,     3,     0,     3,    38,    67,    39,     0,
     3,    38,    67,     1,     0,    42,     0,    43,     0,     4,
     0,    69,     0,     0,    70,     0,    69,    70,     0,    69,
    63,     0,    60,     0,    71,     0,    73,     0,    74,     0,
    75,     0,    72,    37,     0,    76,     1,     0,    76,     0,
     0,     7,    34,    76,    35,    70,     0,     7,    34,    76,
    35,    70,     6,    70,     0,    11,    34,    76,    35,    70,
     0,     9,    72,    37,     0,    77,     0,    78,     0,    84,
    33,    77,     0,    84,    12,    77,     0,    84,    13,    77,
     0,    84,    14,    77,     0,    84,    15,    77,     0,    84,
    16,    77,     0,    79,     0,    78,    17,    79,     0,    80,
     0,    79,    18,    80,     0,    81,     0,    80,    19,    81,
     0,    80,    20,    81,     0,    82,     0,    81,    21,    82,
     0,    81,    22,    82,     0,    81,    23,    82,     0,    81,
    24,    82,     0,    83,     0,    82,    27,    83,     0,    82,
    28,    83,     0,    84,     0,    83,    29,    84,     0,    83,
    30,    84,     0,    83,    31,    84,     0,    85,     0,    28,
    84,     0,    32,    84,     0,    25,    84,     0,    26,    84,
     0,    89,     0,    85,    38,    76,    39,     0,    85,    34,
    86,    35,     0,    85,    25,     0,    85,    26,     0,    87,
     0,     0,    88,     0,    77,     0,    88,    36,    77,     0,
     3,     0,     4,     0,    34,    76,    35,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    39,    41,    42,    44,    45,    46,    49,    50,    51,    62,
    64,    66,    67,    69,    70,    72,    77,    78,    81,   101,
   102,   106,   108,   109,   111,   112,   116,   129,   130,   136,
   137,   139,   140,   142,   147,   155,   156,   158,   159,   161,
   174,   185,   189,   190,   193,   196,   197,   199,   200,   201,
   203,   204,   205,   206,   207,   209,   210,   216,   217,   219,
   220,   222,   224,   226,   228,   229,   230,   231,   232,   233,
   234,   236,   237,   239,   240,   242,   243,   244,   246,   247,
   248,   249,   250,   252,   253,   254,   256,   257,   258,   259,
   261,   262,   263,   264,   265,   267,   268,   269,   270,   271,
   273,   274,   276,   278,   279,   281,   287,   288
};

static const char * const yytname[] = {   "$","error","$undefined.","TIDEN",
"TNUMBER","TCONST","TELSE","TIF","TINT","TRETURN","TVOID","TWHILE","TADDASSIGN",
"TSUBASSIGN","TMULASSIGN","TDIVASSIGN","TMODASSIGN","TOR","TAND","TEQUAL","TNOTEQU",
"TGREAT","TLESS","TGREATE","TLESSE","TINC","TDEC","TPLUS","TMINUS","TMULTIPLY",
"TDIVIDE","TMOD","TNOT","TASSIGN","TLPAREN","TRPAREN","TCOMMA","TSEMICOLON",
"TLBRACKET","TRBRACKET","TLBRACE","TRBRACE","TILLIDENT","TLONG","LOWER_THEN_ELSE",
"mini_c","translation_unit","external_dcl","function_def","function_header",
"dcl_spec","dcl_specifiers","dcl_specifier","type_qualifier","type_specifier",
"function_name","formal_param","opt_formal_param","formal_param_list","param_dcl",
"compound_st","opt_dcl_list","declaration_list","declaration","init_dcl_list",
"init_declarator","declarator","opt_number","opt_stat_list","statement_list",
"statement","expression_st","opt_expression","if_st","while_st","return_st",
"expression","assignment_exp","logical_or_exp","logical_and_exp","equality_exp",
"relational_exp","additive_exp","multiplicative_exp","unary_exp","postfix_exp",
"opt_actual_param","actual_param","actual_param_list","primary_exp",""
};
#endif

static const short yyr1[] = {     0,
    45,    46,    46,    47,    47,    47,    48,    48,    48,    49,
    50,    51,    51,    52,    52,    53,    54,    54,    55,    55,
    55,    56,    57,    57,    58,    58,    59,    60,    60,    61,
    61,    62,    62,    63,    63,    64,    64,    65,    65,    66,
    66,    66,    66,    66,    67,    68,    68,    69,    69,    69,
    70,    70,    70,    70,    70,    71,    71,    72,    72,    73,
    73,    74,    75,    76,    77,    77,    77,    77,    77,    77,
    77,    78,    78,    79,    79,    80,    80,    80,    81,    81,
    81,    81,    81,    82,    82,    82,    83,    83,    83,    83,
    84,    84,    84,    84,    84,    85,    85,    85,    85,    85,
    86,    86,    87,    88,    88,    89,    89,    89
};

static const short yyr2[] = {     0,
     1,     1,     2,     1,     1,     2,     2,     2,     2,     3,
     1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
     1,     3,     1,     0,     1,     3,     2,     4,     4,     1,
     0,     1,     2,     3,     3,     1,     3,     1,     3,     1,
     4,     4,     1,     1,     1,     1,     0,     1,     2,     2,
     1,     1,     1,     1,     1,     2,     2,     1,     0,     5,
     7,     5,     3,     1,     1,     3,     3,     3,     3,     3,
     3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
     3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
     1,     2,     2,     2,     2,     1,     4,     4,     2,     2,
     1,     0,     1,     1,     3,     1,     1,     3
};

static const short yydefact[] = {     0,
     0,    16,    17,    18,     1,     2,     4,     0,     0,    11,
    12,    14,    15,     5,     6,     3,     9,     8,    31,     7,
    40,    43,    44,     0,     0,    36,    38,    13,     0,    47,
    30,    32,     0,    24,    10,    35,     0,    34,     0,    40,
    43,    44,   106,   107,     0,    59,     0,     0,     0,     0,
     0,     0,    51,     0,    46,    48,    52,     0,    53,    54,
    55,     0,    64,    65,    72,    74,    76,    79,    84,    87,
    91,    96,    33,    45,     0,     0,     0,    23,    25,    37,
    39,     0,     0,    58,     0,    94,    95,    92,    93,     0,
    29,    28,    50,    49,    56,    57,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    99,   100,   102,     0,    42,
    41,    27,    22,     0,     0,    63,     0,   108,    73,    87,
    75,    77,    78,    80,    81,    82,    83,    85,    86,    88,
    89,    90,    67,    68,    69,    70,    71,    66,   104,     0,
   101,   103,     0,    26,    59,    59,    98,     0,    97,    60,
    62,   105,    59,    61,     0,     0,     0
};

static const short yydefgoto[] = {   165,
     5,     6,     7,     8,    29,    10,    11,    12,    13,    24,
    35,    77,    78,    79,    53,    30,    31,    14,    25,    26,
    27,    75,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
   150,   151,   152,    72
};

static const short yypact[] = {    27,
   -18,-32768,-32768,-32768,    27,-32768,-32768,     2,     1,    10,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,    10,-32768,
    38,    -1,    14,    50,    13,-32768,     7,-32768,     3,    88,
    10,-32768,    32,    10,-32768,-32768,     3,-32768,    86,    58,
-32768,-32768,-32768,-32768,    64,   133,    66,   133,   133,   133,
   133,   133,-32768,     6,    78,-32768,-32768,    68,-32768,-32768,
-32768,    15,-32768,    94,    99,    54,    33,    -6,   115,   127,
   128,-32768,-32768,-32768,    12,     3,    84,    85,-32768,-32768,
-32768,   133,    92,-32768,   133,-32768,-32768,-32768,-32768,    96,
-32768,-32768,-32768,-32768,-32768,-32768,   133,   133,   133,   133,
   133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
   133,   133,   133,   133,   133,-32768,-32768,   133,   133,-32768,
-32768,-32768,-32768,    10,    98,-32768,   100,-32768,    99,-32768,
    54,    33,    33,    -6,    -6,    -6,    -6,   115,   115,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   103,
-32768,    87,   108,-32768,   123,   123,-32768,   133,-32768,   144,
-32768,-32768,   123,-32768,   152,   156,-32768
};

static const short yypgoto[] = {-32768,
-32768,   159,-32768,-32768,     0,-32768,   158,-32768,-32768,-32768,
-32768,-32768,-32768,    45,   162,-32768,-32768,    -2,-32768,   134,
    97,-32768,-32768,-32768,   -54,-32768,   126,-32768,-32768,-32768,
   -44,   -87,-32768,    77,    79,     8,   -24,   -12,   -39,-32768,
-32768,-32768,-32768,-32768
};


#define	YYLAST		177


static const short yytable[] = {     9,
    94,    84,    17,    21,     9,    40,    91,    90,    86,    87,
    88,    89,   120,    36,     2,    96,    32,     3,    15,     4,
   105,   106,   143,   144,   145,   146,   147,   148,    73,     1,
   149,     2,   -20,    76,     3,    74,     4,   125,    18,    39,
   127,    19,    22,    23,    41,    42,    92,   -21,    37,    38,
   121,   -58,    93,   101,   102,   103,   104,   130,   130,   130,
   130,   130,   130,   130,   130,   130,   130,   140,   141,   142,
   162,   -19,    99,   100,   153,    33,   134,   135,   136,   137,
    43,    44,     2,    34,    45,     3,    46,     4,    47,    81,
    43,    44,   138,   139,    45,    33,    46,    82,    47,    85,
   160,   161,    48,    49,    95,    50,   132,   133,   164,    51,
    97,    52,    48,    49,   -59,    50,    98,    19,   123,    51,
   124,    52,   158,    76,   -59,    43,    44,    19,   126,    45,
   128,    46,   155,    47,   156,    43,    44,   157,   110,   111,
   112,   113,   114,   107,   108,   109,   159,    48,    49,   163,
    50,   166,   116,   117,    51,   167,    52,    48,    49,   115,
    50,   118,    19,    16,    51,   119,    52,    28,   154,    20,
    80,    83,   122,   129,     0,     0,   131
};

static const short yycheck[] = {     0,
    55,    46,     1,     3,     5,     3,     1,    52,    48,    49,
    50,    51,     1,     1,     5,     1,    19,     8,    37,    10,
    27,    28,   110,   111,   112,   113,   114,   115,    31,     3,
   118,     5,    34,    34,     8,     4,    10,    82,    37,    33,
    85,    40,    42,    43,    42,    43,    41,    34,    36,    37,
    39,    37,    55,    21,    22,    23,    24,    97,    98,    99,
   100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
   158,    34,    19,    20,   119,    38,   101,   102,   103,   104,
     3,     4,     5,    34,     7,     8,     9,    10,    11,     4,
     3,     4,   105,   106,     7,    38,     9,    34,    11,    34,
   155,   156,    25,    26,    37,    28,    99,   100,   163,    32,
    17,    34,    25,    26,    37,    28,    18,    40,    35,    32,
    36,    34,    36,   124,    37,     3,     4,    40,    37,     7,
    35,     9,    35,    11,    35,     3,     4,    35,    12,    13,
    14,    15,    16,    29,    30,    31,    39,    25,    26,     6,
    28,     0,    25,    26,    32,     0,    34,    25,    26,    33,
    28,    34,    40,     5,    32,    38,    34,    10,   124,     8,
    37,    46,    76,    97,    -1,    -1,    98
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

case 9:
#line 52 "parser.y"
{

                   /* 에러 발생시 tupe 수정을 위해 default값 0세팅 */
                   /* identifier about parse error */
                    look_tmp->type=0;
                    yyerrok;
                    /* error - wrong function definition */
                    reporterror(wrong_funcdef);
                  ;
    break;}
case 17:
#line 77 "parser.y"
{type_int=1;;
    break;}
case 18:
#line 78 "parser.y"
{type_void=1;;
    break;}
case 19:
#line 83 "parser.y"
{

                /* identifier about parse error or not defined identifier/function*/
                  if(look_id->type==0||look_id->type==5){


                        if(type_void==1){
                              look_id->type=4; /* function, return type=void */
                        }else if(type_int==1){
                              look_id->type=8; /* function, return type=int */
                        }
                        type_int=0;
                        type_void=0;
                        look_tmp=look_id;
                  }
                  ;
    break;}
case 27:
#line 116 "parser.y"
{
                  if(type_int==1){ /* int의 경우 */
                        param_int=1;
                        look_id->type=10;  /* integer scalar parameter */
                  }
                  type_int=0;
                  type_void=0;

                  param_int=0;


;
    break;}
case 29:
#line 131 "parser.y"
{
                        yyerrok;
                        reporterror(nobrace); /* no brace error */
                  ;
    break;}
case 34:
#line 142 "parser.y"
{
                        type_int=0;
                        type_void=0;

                  ;
    break;}
case 35:
#line 147 "parser.y"
{
                        look_tmp->type=0; /* 예상치 못한 에러 발생  */
                        yyerrok;
                        type_int=0;
                        type_void=0;
                        reporterror(nosemi); /* no semicolon error */
                  ;
    break;}
case 40:
#line 161 "parser.y"
{
                  if(look_id->type==0){

                        if(type_int==1){
                              look_id->type=1; /* integer scalar variable */
                        }
                        else if(type_void==1)
                              look_id->type=2; /* void scalar variable */

                  }
                  look_tmp=look_id;

            ;
    break;}
case 41:
#line 175 "parser.y"
{

                  if(look_id->type==0){
                        if(type_int==1)look_id->type=3; /*  integer array variable */

                  }

                   look_tmp=look_id;

            ;
    break;}
case 42:
#line 185 "parser.y"
{
                  yyerrok;
                  reporterror(nobracket); /* no bracket error */
            ;
    break;}
case 57:
#line 211 "parser.y"
{
                        yyerrok;
                        reporterror(nosemi); /* no semicolon error */
                  ;
    break;}
case 106:
#line 282 "parser.y"
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
#line 291 "parser.y"

