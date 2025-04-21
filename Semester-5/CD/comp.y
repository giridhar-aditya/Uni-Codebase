%{
#include<stdio.h>
extern int yylex();
void yyerror(const char* s);
%}

%token IF ELSE FOR DO WHILE NUM STR ID REL 

%%
S : IF '(' cond ')' S {printf("IF ");} |
    IF '(' cond ')' S ELSE S ';' {printf("IF-ELSE ");} |
    FOR '(' assign ';' cond ';' assign ')' S {printf("FOR ");} |
    WHILE '(' cond ')' S {printf("WHILE ");} |
    id '(' arg ')' ';' {printf("FUNC ");}|
    assign ';' ;

assign : id '=' E {printf("= ");} ;

cond : id REL id {printf("REL ");} ;

arg : id ',' id |
    id ;

E : E '+' T {printf("+ ");} |
    E '-' T {printf("- ");} |
    T ;

T : T '*' F {printf("* ");} |
    T '/' F {printf("/ ");} |
    F ;

F : '(' E ')' |
    id ;

id : ID {printf("ID ");} |
     NUM {printf("NUM ");} |
     STR {printf("STR ");} ;
%%
int main() {
    if(yyparse()){printf("INVALID SYNTAX");}
    else{printf("VALID SYNTAX");}
    return 0;
}
void yyerror(const char* s){
    fprintf(stderr,"Compiler Error : %s",s);
}
