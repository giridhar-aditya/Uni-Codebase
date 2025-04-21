#include<stdio.h>>
int main () {            //CALCULATING RESISTANCE
    float i,r,v;
    printf("THIS IS PROGRAM TO FIND RESISTANCE\n");
    printf("Enter the value of CURRENT :");
    scanf("%f",&i);
    printf("Enter the value of VOLTAGE :");
    scanf("%f",&v);
    r=v/i;
    printf("THE RESISTANCE IS %.2f ohms",r);
}

