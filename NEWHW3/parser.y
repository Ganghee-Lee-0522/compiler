%{
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

%}

%token TIDEN TNUMBER TCONST TELSE TIF TINT TRETURN TVOID TWHILE
%token TADDASSIGN TSUBASSIGN TMULASSIGN TDIVASSIGN TMODASSIGN
%token TOR TAND TEQUAL TNOTEQU TGREAT TLESS TGREATE TLESSE TINC TDEC
%token TPLUS TMINUS TMULTIPLY TDIVIDE TMOD TNOT TASSIGN TLPAREN TRPAREN TCOMMA TSEMICOLON
%token TLBRACKET TRBRACKET TLBRACE TRBRACE
%token TILLIDENT TLONG TOVER

%nonassoc LOWER_THEN_ELSE
%nonassoc TELSE


%%
mini_c : translation_unit
         ;
translation_unit    : external_dcl
         | translation_unit external_dcl
         ;
external_dcl       : function_def
           | declaration
           | TIDEN TSEMICOLON
           | TIDEN error
      {
              yyerrok;
             reporterror(wrong_st); /* error - wrong statement */
       }
           | TRBRACE /* 왼쪽 중괄호 없음 */
           {
                    yyerrok;
                    reporterror(nobrace);
              }
           ;
              

function_def      : function_header compound_st
                  |function_header TSEMICOLON
                  |function_header error /* 비정상적인 함수 정의 */
                  {
                    yyerrok;
                    /* error - wrong function definition */
                    reporterror(wrong_funcdef);
                  }
         ;
function_header    : dcl_spec function_name formal_param
         ;
dcl_spec       : dcl_specifiers
         ;
dcl_specifiers       : dcl_specifier
                 | dcl_specifiers dcl_specifier
         ;
dcl_specifier       : type_qualifier
         | type_specifier
         ;
type_qualifier       : TCONST
         ;


      /* 해당 하는 type 변수를 1로 설정*/
type_specifier    : TINT {type_int=1;}  /* type : integer */
          | TVOID {type_void=1;} /* type : void */
         ;

function_name    : TIDEN

                  {

                /* identifier about parse error or not defined identifier/function*/
                  if(look_id->type==0||look_id->type==5){


                        if(type_void==1){
                              look_id->type=4; /* function, return type=void */
                        }else if(type_int==1){
                              look_id->type=6; /* function, return type=int */
                        }
                        type_int=0;
                        type_void=0;
                        look_tmp=look_id;
                  }
                  }

                  /* ill identifier, too long identifier, overflow 인 경우, scanner에서 에러 발생시킴*/
                  |TILLIDENT
                  |TLONG
                  |TOVER 
;



formal_param       : TLPAREN opt_formal_param TRPAREN
         ;
opt_formal_param    : formal_param_list
            |
         ;
formal_param_list    : param_dcl
             | formal_param_list TCOMMA param_dcl
         ;

                  /* 파라미터인 경우 */
param_dcl       : dcl_spec declarator{
                  if(type_int==1){ /* int의 경우 */
                        param_int=1;
                        look_id->type=7;  /* integer scalar parameter */
                  }
                  type_int=0;
                  type_void=0;

                  param_int=0;


}
         ;
compound_st : TLBRACE opt_dcl_list opt_stat_list TRBRACE
            | TLBRACE opt_dcl_list opt_stat_list error /* 오른쪽 중괄호 없음 */
              {
                    yyerrok;
                    reporterror(nobrace);
              }
              ;
opt_dcl_list       : declaration_list
         |
         ;
declaration_list    : declaration
         | declaration_list declaration
         ;
declaration       : dcl_spec init_dcl_list TSEMICOLON{
                        type_int=0;
                        type_void=0;

                  }
                  | dcl_spec init_dcl_list error{
                        yyerrok;
                        type_int=0;
                        type_void=0;
                        reporterror(nosemi); /* no semicolon error */
                  }
         ;
init_dcl_list       : init_declarator
         | init_dcl_list TCOMMA init_declarator
         ;
init_declarator    : declarator
          | declarator TASSIGN TNUMBER
         ;
declarator    : TIDEN{
                  if(look_id->type==0){

                        if(type_int==1){
                              look_id->type=1; /* integer scalar variable */
                        }
                        else if(type_void==1)
                              look_id->type=2; /* void scalar variable */

                  }
                  look_tmp=look_id;

            }
            | TIDEN TLBRACKET opt_number TRBRACKET
            {

                  if(look_id->type==0){
                        if(type_int==1)look_id->type=3; /*  integer array variable */

                  }

                   look_tmp=look_id;

            }
            |TIDEN TLBRACKET opt_number error{
                  yyerrok;
                  reporterror(nobracket); /* no bracket error */
            }
            |TILLIDENT
            |TLONG;


opt_number       : TNUMBER

         ;
opt_stat_list       : statement_list
          |
         ;
statement_list       : statement
          | statement_list statement
          | statement_list declaration
         ;
statement       : compound_st
            | expression_st
            | if_st
            | while_st
            | return_st
            ;
expression_st    : opt_expression TSEMICOLON
                  | expression error
                  {
                        yyerrok;
                        reporterror(nosemi); /* no semicolon error */
                  }
      ;
opt_expression    : expression
      |
      ;
if_st          : TIF TLPAREN expression TRPAREN statement  %prec LOWER_THEN_ELSE
         | TIF TLPAREN expression TRPAREN statement TELSE statement
         ;
while_st       : TWHILE TLPAREN expression TRPAREN statement
         ;
return_st       : TRETURN opt_expression TSEMICOLON
         ;
expression       : assignment_exp
         ;
assignment_exp    : logical_or_exp
      | unary_exp TASSIGN assignment_exp
      | unary_exp TADDASSIGN assignment_exp
      | unary_exp TSUBASSIGN assignment_exp
      | unary_exp TMULASSIGN assignment_exp
      | unary_exp TDIVASSIGN assignment_exp
      | unary_exp TMODASSIGN assignment_exp
      ;
logical_or_exp    : logical_and_exp
      | logical_or_exp TOR logical_and_exp
      ;
logical_and_exp    : equality_exp
          | logical_and_exp TAND equality_exp
         ;
equality_exp       : relational_exp
         | equality_exp TEQUAL relational_exp
         | equality_exp TNOTEQU relational_exp
         ;
relational_exp    : additive_exp
      | relational_exp TGREAT additive_exp
      | relational_exp TLESS additive_exp
      | relational_exp TGREATE additive_exp
      | relational_exp TLESSE additive_exp
      ;
additive_exp    : multiplicative_exp
      | additive_exp TPLUS multiplicative_exp
      | additive_exp TMINUS multiplicative_exp
      ;
multiplicative_exp    : unary_exp
             | multiplicative_exp TMULTIPLY unary_exp
             | multiplicative_exp TDIVIDE unary_exp
             | multiplicative_exp TMOD unary_exp
         ;
unary_exp       : postfix_exp
            | TMINUS unary_exp
            | TNOT unary_exp
            | TINC unary_exp
            | TDEC unary_exp
         ;
postfix_exp       : primary_exp
               | postfix_exp TLBRACKET expression TRBRACKET
               | postfix_exp TLPAREN opt_actual_param TRPAREN
               | postfix_exp TINC
               | postfix_exp TDEC
         ;
opt_actual_param    : actual_param
           |
         ;
actual_param       : actual_param_list
         ;
actual_param_list    : assignment_exp
            | actual_param_list TCOMMA assignment_exp
         ;
primary_exp   : TIDEN
            {
                  if(look_id->type==0)
                        look_id->type=5; /* not defined identifier/function */

            }
              | TNUMBER
              | TLPAREN expression TRPAREN

         ;
%%