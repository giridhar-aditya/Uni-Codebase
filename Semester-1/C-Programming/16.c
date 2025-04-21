/*Write a C program to convert the temperature from Fahrenheit to Celsius and
Celsius to Fahrenheit with comments*/
#include<stdio.h> //header file inclusion
int main () {
    int c,f; //declaring integer celcius and fahrenheit
    char a; //declaring chraracted a
    printf("Enter c for celcius to fahrenheit\nEnter f for fahrenheit to celcius :"); //printing choice tab
    scanf("%c",&a); //input for a
    if (a=='c'){ //using loop to switch between two conversions
        printf("Enter Temp :"); //asking temperture
        scanf("%d",&c); //taking temperature
        printf("%d F", (9/5*c)+32); } //using formula to print in Fahrenheit
    else if (a=='f') { //else if for another conversion
        printf("Enter Temp :"); //asking temperature
        scanf("%d",&f); //taking temperature
        printf("%d C",5/9*f-32); } //using formula to print in Celcius
    else  //loop for error
    printf("ERROR , INVALID!!!"); // else incase of invalid entry
    return 0; //status of execution
    
}