/*Write a C program to print all the data types with its memory size and address by
creating at two variables per data type [int, char, float, double]. All the lines in the
program should have the single line comment which explains the need for that
line.*/
#include<stdio.h>  //Pre-processor directive 
int main () {      //main function header
    int a,a1;          //declaring integers a,a1
    float f,f1;            //declaring float f,f1
    double d,d1;           //declaring double d,d1
    char c,c1;             //declaring char c,c1
    printf("INTEGER - %d %d\nCHARACTER - %d %d\nFLOAT - %d %d\nDOUBLE - %d %d", 
    sizeof(a),&a1,sizeof(c),&c1,sizeof(f),&f1,sizeof(d),&d1);  // printing size and memory address
    return 0; //status of execution
}