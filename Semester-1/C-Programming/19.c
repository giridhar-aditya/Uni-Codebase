/*Write a C program to calculates the gross salary of an employee by reading their
Basic salary.*/
#include<stdio.h> //Pre-Processor Directive
int main () {  //main function header
    int pay; //Basic pay integer
    printf("Enter your Basic Pay :"); //asking basic pay
    scanf("%d",&pay); //storing basic pay
    printf("The Gross Pay is %d",(21*pay)/16); //printing basic pay
    return 0; //status of execution
} 