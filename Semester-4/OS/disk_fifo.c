#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main(){
    int n,i,cp,mov;
    printf("Enter the Number of Requests :"); scanf("%d",&n);
    int* req = calloc(sizeof(int),n);
    printf("Enter the Requests in Order of Execution :");
    for(i = 0;i<n;i++){scanf("%d",&req[i]);}
    printf("Enter the Current Position :"); scanf("%d",&cp);
    mov = abs(cp-req[0]);
    for(i=1;i<n;i++){mov += abs(req[i-1]-req[i]);}
    printf("Total Head Movement : %d",mov);
}