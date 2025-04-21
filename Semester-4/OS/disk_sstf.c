#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){
    int n,min,min_d=9999,i,cp,mov=0,j;
    printf("Enter the Number of Requests :"); scanf("%d",&n);
    int* req = calloc(sizeof(int),n); 
    printf("Enter the Requests :");
    for(i=0;i<n;i++){scanf("%d",&req[i]);}
    printf("Enter the Current Position :"); scanf("%d",&cp);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){if(abs(cp-req[j]) < min_d){min = j; min_d=abs(cp-req[j]);} }
        mov += min_d; cp = req[min];
        min_d = 9999; req[min] = 9999;    
    }
    printf("The Total Head Movement : %d",mov);
}