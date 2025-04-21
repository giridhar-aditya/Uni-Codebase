#include<stdio.h>
int main() {   //REVERSE OF DIGITS
    int a,b,c,d;
    printf("REVERSAL OF THE DIGIT!!!\n");
    printf("Enter your number :");
    scanf("%d",&a);
    b = a/100;
    c = (a%100)/10;
    d = (a%100)%10;
    printf("The Number %d after getting reversed is %d%d%d",a,d,c,b);
}