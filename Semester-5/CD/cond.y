%{
#include<stdio.h>
extern int yylex();
void yyerror(const char* s);
%}

%token IF ELSE
%token NUM REL ID

%%
S : IF '(' cond ')' S {printf("IF ");} |
    IF '(' cond ')' S ';' ELSE S ';' {printf("IF-ELSE ");} |
    assign ';'
    ;

assign : id '=' E {printf("= ");} ;

cond : id REL id {printf("REL ");} ;

E : E '+' T {printf("+ ");} |
    E '-' T {printf("- ");} |
    T ;

T : T '*' F {printf("* ");} |
    T '/' F {printf("/ ");} |
    F ;

F : '(' E ')' |
    id ;

id :ID {printf("ID ");} |
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