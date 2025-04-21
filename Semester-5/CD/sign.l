%{
#include<stdio.h>
int c1=0, c2 = 0;
%}
%%
(\+|-)[0-9]+ {c1++;}
(\+|-)[0-9]+\.[0-9]+ {c2++;}
[\n\t\r ] {}
. {}
%%
int main(){
    yylex();
    printf("Signed Integers : %d\n",c1);
    printf("Signer Float : %d\n",c2);
    return 0;
}
int yywrap(){return 1;}