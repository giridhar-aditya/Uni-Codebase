#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void sort(int r[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(r[j] > r[j+1]){
                temp = r[j+1]; r[j+1]=r[j]; r[j] = temp;
            }
        }
    }
    printf("Sorted Array :");
    for(int i=0;i<n;i++){printf("%d\t",r[i]);}
}
void main(){
    int n,min,max,cp,mov=0,cpr; 
    printf("Enter the Lower and Upper Bound of Cursor :"); scanf("%d%d",&min,&max);
    printf("Enter the Total Number of Requests "); scanf("%d",&n);
    int* request = calloc(sizeof(int),n);
    printf("Enter the Requests :");
    for(int i=0;i<n;i++){scanf("%d",&request[i]);}
    sort(request,n);
    printf("Enter the Current Head Position :"); scanf("%d",&cp); cpr=cp;
    for(int i=0;i<n;i++){
        if(request[i] >= cp){
            mov += abs(cp-request[i]); cp = request[i];
            printf("\nMOV : %d CP : %d",mov,cp);
        }
    }
    mov+= max-cp;
    printf("\nMOV : %d CP : %d",mov,cp);
    mov+= max-cpr;
    cp = cpr;
    printf("\nMOV Before Reverse : %d CP : %d",mov,cp);
    for(int i=n-1;i>=0;i--){
        if(request[i] < cp){
            mov += abs(cp-request[i]);
            printf("\nMOV : %d CP : %d",mov,cp);
            cp = request[i];
            printf("\nMOV : %d CP : %d",mov,cp);
        }
    }
    printf("\nMOV : %d",mov);
    printf("Total Head Movement : %d",mov);
    free(request);
}