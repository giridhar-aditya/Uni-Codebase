#include<stdio.h> 
int main () {
    int pay; 
    printf("Enter your Basic Pay :"); 
    scanf("%d",&pay); 
    if(pay>=250000)
    printf("The Gross Pay is %d",(21*pay)/16); 
    else if((pay<150000) && (pay>=25000))
    printf("The Gross Pay is %d",(31*pay)/20);
    else if(pay<15000)
    printf("The Gross Pay is %d",(15*pay)/8);
    return 0;
}