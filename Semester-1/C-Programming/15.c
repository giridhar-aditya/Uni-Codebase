/*Write a C program to find the Simple Interest and Compound Interest with
comments*/
#include<stdio.h> //Pre-processor directive
#include<math.h> //including math.h library 
int main () {  //main function header
    int p,t; //integer principle and time duration
    float r; //float rate of intrest
    printf("Enter the Principal Amount :"); //asking principal amount
    scanf("%d",&p); //taking principal amount
    printf("Enter the Rate of intrest :"); //asking rate of intrest 
    scanf("%f",&r); //taking rate of intrest 
    printf("Enter the Time (years) :"); //asking time duration
    scanf("%d",&t); //taking time duration
    printf("THE SIMPLE INTREST IS : %f\nTHE COMPOUND INTREST IS : %f",
    p*(r/100)*t,p*pow(1 + r/100,t)-p); //using formula to print simple and compound intrest
    return 0; //status of execution
}