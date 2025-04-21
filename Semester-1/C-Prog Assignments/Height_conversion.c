#include<stdio.h>
int main () {                              //HEIGHT CONVERSION
    int cm,ft,in;
    printf("PROGRAM TO CONVERT CENTIMENTER TO FT & INCHES\n");
    printf("Enter your height in centimeters :");
    scanf("%d",&cm);
    ft = cm/30;
    in = (cm%30)/2.54;
    printf("Your are %d feet and %d inches tall",ft,in);
}

