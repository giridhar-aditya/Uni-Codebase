#include<stdio.h>>
int main () {            //CALCULATING VOLTAGE
    float i,r,v;
    printf("THIS IS PROGRAM TO FIND VOLTAGE\n");
    printf("Enter the value of CURRENT :");
    scanf("%f",&i);
    printf("Enter the value of RESISTANCE :");
    scanf("%f",&r);
    v=i*r;
    printf("THE VOLTAGE IS %.2f Volts",v);
}

