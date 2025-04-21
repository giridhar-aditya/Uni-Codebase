#include<stdio.h>
int main() {   //SUM OF 6 DIGITS
    int a,b,c,d,e;
    printf("SUM OF THE DIGITS!!!\n");
    printf("Enter your number :");
    scanf("%d",&a);
    b = a/100;
    c = (a%100)/10;
    d = (a%100)%10;
    e = b+c+d;
    printf("Sum of all the digits in %d = %d",a,e);
}