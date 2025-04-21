#include<stdio.h>
int main () {
    int a,b,c,t;
    printf("Enter 3 numbers :");
    scanf("%d%d%d",&a,&b,&c);
    t= (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c) ; 
    printf("The Largest of three numbers is %d",t);
    return 0;
}