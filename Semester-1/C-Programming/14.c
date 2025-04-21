/*Write a C program to find the area and circumference of a circle along with
comments*/
#include<stdio.h> //Pre-processor directive 
# define PI 3.14 //using a Macro for PI value in float
int main () {   //main function header
    int r;  // declaring integer for radius
    printf("Enter the radius :");  //asking for value of radius
    scanf("%d",&r);  //taking in radius value
    printf("CIRCUMFERENCE : %f\nAREA : %f",2*PI*r,PI*r*r); //printing using circumference and area formula as float
    return 0; //status of execution
}