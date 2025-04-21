#include<stdio.h>
int main() {
    int a,f=1,i,m,temp=0;
    printf("Enter the Number :");
    scanf("%d",&a);
    for(i=1;i<a+1;i++){
        f*=i;
    }
    printf("The Factorial of %d is %d",a,f);
    m=a/2;
    for (i=2;i<=m;i++) {
        if (a%i==0){
        printf("\nCOMPOSITE NUMBER");
        temp=1; 
        break;  }     
    }
    if (temp==0)
    printf("\nPRIME NUMBER"); 
        
    }
