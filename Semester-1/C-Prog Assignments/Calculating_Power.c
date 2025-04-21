#include<stdio.h>>
int main () {            //CALCULATING POWER
    float i,v,p;
    printf("THIS IS PROGRAM TO FIND POWER\n");
    printf("Enter the value of CURRENT :");
    scanf("%f",&i);
    printf("Enter the value of VOLTAGE :");
    scanf("%f",&v);
    p=v*i;
    printf("THE POWER IS %.2f Watts",p);
}

