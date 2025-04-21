%{
#include<stdio.h>
%}
%%
"+" {printf("+ ");}
"-" {printf("- ");}
"*" {printf("* ");}
"/" {printf("/ ");}
[\t\r ] {}
. {}
%%
int main(){
    yylex();
    return 0;
}
int yywrap(){return 1;}