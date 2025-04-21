#include<stdio.h>
#define PI 3.14
int main (){                             //DEGREE TO RADIANS
    int deg,rads;
    printf("This is a program to Covert degrees to radians\n");
    printf("Enter the value in degrees :");
    scanf("%d",&deg);
    rads= (deg*PI)/180;
    printf("The value of %d = %d radians",deg,rads);
}