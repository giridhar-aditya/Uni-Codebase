/*Write a C program to find the given number is Odd or Even, Positive
or Negative and Zero*/
#include<stdio.h>
int main() {
    int a;
    printf("Enter any number :");
    scanf("%d",&a);
    if (a==0) {
    printf("ZERO!!!"); }
    else{
        if (a>0)
        printf("POSITIVE");
        else if (a<0)
        printf("NEGATIVE");
        if (a%2==0)
        printf(" EVEN NUMBER");
        if (a%2==1 || a%2==-1)
        printf(" ODD NUMBER");
    }

}