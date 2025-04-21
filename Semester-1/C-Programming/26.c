#include<stdio.h>
int main () {
    int a;
    printf("Enter A number :");
    scanf("%d",&a);
    if (a<=0)     
    printf("You have given improper input for this program"); 
    switch(a%2){
        case 0:
        printf("%d",a*a);
        break;
        case 1:
        printf("%d",a*100);
        break;
        default:
        break;
    }
    switch(a%6){
        case 0:
        printf("\n%d",a*a*a);
        break;
        default:
        break;
    }
    return 0; 
}