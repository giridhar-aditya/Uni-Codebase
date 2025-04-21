#include<stdio.h>
int main () {  //PRIME NUMBER IN RANGE
    int i=2,j,n,temp;
    printf("Enter the maximum range :");
    scanf("%d",&n);
    printf("The Prime Numbers are : ");
    for(i=2;i<=n;i++) {       
        temp=1;
        for(j=2;j<=i/2;j++) {
            if(i%j==0)
            temp=0;
        }
        if (temp) 
        printf("%d\t",i);
        
                      
    }       
}

    
    