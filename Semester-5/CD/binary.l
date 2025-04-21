%{
#include<stdio.h>
%}
%%
^(0(0|1){0,4}1|1(0|1){0,4}0)$ {printf("%s is VALID\n",yytext);}
. {}
%%
int main(){
    yylex();
    return 0;
}
int yywrap(){return 1;}