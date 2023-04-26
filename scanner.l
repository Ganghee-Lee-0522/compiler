%{
#include <stdio.h>
#include <stdlib.h>
#include "tn.h"
extern int linenum; //라인수 세는 
extern reporterror(enum tnumber tn); //에러 출력하는 함수
%}
%%
//주석문
"//".*  return(TCMT);

//Identifier
[A-Za-z_][A-Za-z0-9_]* {
    if(yyleng>10){
        reporterror(TOOLONG);
    }return(TIDENT)};
    
//Constant
[0-9]+	return(TNUMBER);

//예약어
"const" return(TCONST);
"else" return(TELSE);
"if" return(TIF);
"int" return(TINT);
"return" return(TRETURN);
"void" return(TVOID);
"while" return(TWHILE);

//연산자
"+"  return(TADD);
"-" return(TSUB);
"*" return(TMUL);
"/" return(TDIV);
"%" return(TMOD);
"=" return(TOP)
"+=" return(TADDASSIGN);
"-=" return(TSUBASSIGN);
"*=" return(TMULASSIGN);
"/=" return(TDIVASSIGN);
"%=" return(TMODASSIGN);
"!"  return(TNOT);
"&&" return(TAND);
"||" return(TOR);
"==" return(TEQUAL);
"!=" return(TNOTEQU);
"<=" return(TLESSE);
">=" return(TGREATE);
"<" return(TLESSE);
">" return(TGREATE);
"++" return(TINC);
"--" return(TDEC);

//Special Symbols
"("  return(TBRASL);
")"  return(TBRASR);
"{"  return(TBRAML);
"}"  return(TBRAMR);
"["  return(TBRALL);
"]"  return(TBRALR);
","  return(TCOMMA);
";"  return(TSEMICOLON);

//White spaces
[ \t\n] return(TSPACE);
.   reporterror(ILLSP);

"\n" linenum++;
%%
int yywrap()
{
    printf("\n1976393 최윤지\n2076278 윤지윤\n2076285 이강희");
    return 1;
}
