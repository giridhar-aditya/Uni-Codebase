#include<stdio.h>
#include<math.h>
int main () {                                      //dd to DMS
    float dd ,remin ,resec;
    int deg,min,sec; 
    printf("THIS PROGRAM IS TO CONVERT DECIMAL DEGREE TO DMS");
    printf("Enter the value in Degree :");
    scanf("%f",&dd);
    deg = truncf(dd); 
    remin = (dd - deg )*60; 
    min = truncf(remin);
    resec = (remin - min)*60;
    sec = truncf(resec);
    printf("%d  %d  %d ",deg,min,sec);
}