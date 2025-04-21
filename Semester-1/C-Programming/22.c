/*Write a C program to find the largest among four numbers*/
#include<stdio.h>
int main () {
    int a,b,c,d,t;
    printf("Enter four numbers :");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    t=a;
    if (b>a)
    t=b;
    if (c>a)
    t=c;
    if (d>a)
    t=d;
    printf("The largest nummber is %d",t);
    return 0;
}