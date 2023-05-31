
/*
* glob.h - global variable for the project
* progrmmer – 최윤지, 윤지윤, 이강희
* date – 06 / 01 / 2023
*/

#define STsize 1000 // ST 크기
#define HTsize 100 // HT 크기
#define FALSE 0
#define TRUE 1
#define MaxIdentLen 10 // identifier의 최대 길이

typedef struct HTentry *HTpointer; // HTentry를 가리키는 HTpointer

typedef struct HTentry {
	int index; // ST 읽기 위해 사용
	int type; // case 구분을 위해 사용
	int cLine; // 코드 line
	HTpointer next;
};


HTpointer HT[HTsize];
HTpointer look_id;
HTpointer look_tmp;


char ST[STsize];

int nextid; // 현재 identifier의 시작 index
int nextfree; // ST에서 다음 character가 삽입될 곳의 index
int hashcode;
int sameid;
int yyleng;
char *yytext;

/*
* errorTypes
* - wrong_funcdef: 잘못된 function 정의
* - noparen : 소괄호 생략된 경우
* - nobrace : 중괄호 생략된 경우
* - nobracket: 대괄호 생략된 경우
* - tlong: 11자 이상의 identifier인 경우
* - toverflow: ST overflow가 발생한 경우
*/
enum errorTypes { wrong_funcdef, nosemi, nobrace, nobracket, tlong, toverflow };
typedef enum errorTypes ERRORtypes;
ERRORtypes err;

/*
* cErrors: 에러 개수 세기
* cLine: 코드 줄 수 세기
* found: symtable.c 에서 사용하는 검색용 flag
*/
int cErrors; // 에러 개수
int cLine; // 코드 line
int found; // symtable.c에서 검색하기 위해 사용