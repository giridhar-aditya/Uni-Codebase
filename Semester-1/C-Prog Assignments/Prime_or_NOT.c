#include<stdio.h>
int main () {  //PRIME NUMBER
    int a,temp=0,m,i;
    printf("Enter your number :");
    scanf("%d",&a);
    m=a/2;
    for (i=2;i<=m;i++) {
        if (a%i==0){
        printf("Number is Not prime");
        temp=1; 
        break;  }     
    }
    if (temp==0)
    printf("Number is Prime");  
     
}