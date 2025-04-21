%{
#include<stdio.h>
int c1=1;
%}
%%
\n {c1++;}
[\t\r ] {}
. {}
%%
int main(){
    yylex();
    printf("Number of Lines : %d\n",c1);
    return 0;
}
int yywrap(){return 1;}