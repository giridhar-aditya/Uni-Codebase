/*Write a C program to print SUM of three numbers using for 3 integer variables and
2 float variables and 4 double variables. Use the comments for understanding*/
#include<stdio.h> //Pre processor directive
int main () {    // main function header
    int ai=3,bi=4,ci=5;  // 3 integer variables
    float af=1.0,bf=2.0; // 2 float varaibles
    double ad=6.0,bd=7.0,cd=8.0,dd=9.0; //4 double varaibles
    printf("The Sum = %lf",ai+bi+ci+af+bf+ad+bd+cd+dd); //printing the sum in double 
    return 0; //status of execution
}