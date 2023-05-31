%{
/* scanner.l - lexical analyzer for the MiniC
* programmer – 최윤지, 윤지윤, 이강희
* date – 06/01/2023 
*/

#include <stdio.h>
#include <stdlib.h>
#include "tn.h" /* token name definition */
#include "glob.h" /* global variation */

extern ComputeHS(int nid, int nfree);
extern LookupHS(int nid, int nfree);
extern SymbolTable();
extern ADDHT(int hscode);
extern PrintHStable();
extern yyerror(char *s);
int i;

%}



%%

 /*
 * Keyword(예약어)
 */
"const" {return(TCONST);}
"else" return(TELSE);
"if" return(TIF);
"int" return(TINT);
"return" return(TRETURN);
"void" {return(TVOID);}
"while" return(TWHILE);


 /*
 * ILL Identifier
 */
[0-9]+[a-zA-Z_][a-zA-Z0-9_]* {
    yyerror("scanner error : start with digit identifier");
    return (TILLIDENT);
}

 /*
 * 주석문
 */
\/\/.* ;


 /*
 * Operator (연산자)
 */
"+" return(TPLUS);
"-" return(TMINUS);
"*" return(TMULTIPLY);
"/" return(TDIVIDE);
"%" return(TMOD);
"=" {return(TASSIGN);}
"+=" return(TADDASSIGN);
"-=" return(TSUBASSIGN);
"*=" return(TMULASSIGN);
"/=" return(TDIVASSIGN);
"%=" return(TMODASSIGN);
"!" return(TNOT);
"&&" return(TAND);
"||" return(TOR);
"==" return(TEQUAL);
"!=" return(TNOTEQU);
"<" return(TLESS);
">" return(TGREAT);
"<=" return(TLESSE);
">=" return(TGREATE);
"++" return(TINC);
"--" return(TDEC);


 /*
 * Special Symbols
 */
"(" {return(TLPAREN);}
")" { return(TRPAREN);}
"," {return(TCOMMA);}
"{" return(TLBRACE);
"}" return(TRBRACE);
"[" return(TLBRACKET);
"]" return(TRBRACKET);
";" {return(TSEMICOLON);}



 /*
 * White spaces
 */
[ \t] ;
[\n] {
  cLine++;
}



 /*
  Identifier (명칭)
 *   11자 이상일 경우, 에러 호출
 *   아닌 경우, SymbolTable 호출 (ST삽입, hashcode계산, HT삽입 수행)
 */
 
[a-zA-Z_][a-zA-Z0-9_]* {

  if(yyleng>MaxIdentLen){ 
    reporterror(tlong);
    return(TLONG);
  }

  else{
    SymbolTable();
    return (TIDEN);
  }
}

 /*
 * Constant (상수) 
 */
[0-9]+  {return(TNUMBER);}

 /*
 * illegal Symbol
 */
.   {yyerror("scanner error : illegal separator");}

%%

int yywrap(){
  return 1;
}


