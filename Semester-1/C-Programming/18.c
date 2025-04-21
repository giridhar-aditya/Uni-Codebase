/*Write a C program to swap the values of two variables using temporary variable
[Try without using Temporary Variable]*/
#include<stdio.h> //Pre-Processor Directive
int main () {  //main function eheader
    int a,b,c; //declaring intgers a and b
    printf("Enter values of A and B respectively :"); //asking values
    scanf("%d%d",&a,&b); //storing vlaues of a and b
    c=a+b; //sum of a and b
    a=c-a; //a becomes b
    b=c-b; //b becomes a
    printf("The value of a is %d\nThe value of b is %d",a,b); // printing a and b
    return 0; //status of execution
}