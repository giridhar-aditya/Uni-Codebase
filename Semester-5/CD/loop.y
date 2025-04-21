%{
#include<stdio.h>
extern int yylex();
void yyerror(const char* s);
%}

%token FOR WHILE DO
%token ID REL NUM

%%
S : FOR '(' assign ';' cond ';' assign ')' S {printf("FOR ");} |
    WHILE '(' cond ')' S {printf("WHILE ");} |
    DO S WHILE '(' cond ')' ';'{printf("DO-WHILE ");} |
    assign ';'
    ;

assign : id '=' E {printf("= ");}
    ;

cond : id REL id {printf("REL ");}
    ;

E : E '+' T {printf("+ ");} |
    E '-' T {printf("- ");} |
    T ;

T : T '*' F {printf("* ");} |
    T '/' F {printf("/ ");} |
    F ;

F : '(' E ')' |
    id 
    ;

id : ID {printf("ID ");} |
    NUM {printf("NUM ");}
    ;
%%
int main(){
    if(yyparse()){printf("INVALID SYNTAX");}
    else{printf("VALID SYNTAX");}
}
void yyerror(const char* s){
    fprintf(stderr,"Compiler Error : %s",s);
}