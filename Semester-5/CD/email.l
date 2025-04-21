%{
#include<stdio.h>
%}
%%
^([a-z0-9]+@(gmail|yahoo).com)$ {printf("%s is VALID\n",yytext);}
. {}
%%
int main(){
    yylex();
    return 0;
}
int yywrap(){return 1;}