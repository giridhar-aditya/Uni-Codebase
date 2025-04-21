%{
#include<stdio.h>
extern int yylex();
void yyerror(const char* s);
%}

%union{
    int num;
    char *id;
}
%token <num> NUM
%token <id> ID

%%
E : E '+' T {printf("+ ");} |
    E '-' T {printf("- ");} |
    T ;
T : T '*' F {printf("* ");} |
    T '/' F {printf("/ ");} |
    F ;
F : '(' E ')' |
    NUM {printf("%d ",$1);} |
    ID {printf("%s ",$1);}
    ;
%%
int main(){
    yyparse();
    return 0;
}
void yyerror(const char* s){
    fprintf(stderr,"Compiler Error : %s",s);
}