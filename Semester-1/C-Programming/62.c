#include<stdio.h>
#include<stdlib.h>
void asc(int arr[],int n){
    int i,j,l;
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            if(arr[j-1]>arr[j]){
                l=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=l;
            }
        }
    }
}
void desc(int arr[],int n){
    int i,j,l;
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            if(arr[j-1]<arr[j]){
                l=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=l;
            }
        }
    }
}
void main(){
    int n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++){
        printf("Enter the %d element:",i+1);
        scanf("%d",(arr+i));
    }
    asc(arr,n);
    printf("\nThe array sorted in ascending order is ");
    for(i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    desc(arr,n);
    printf("\nThe array sorted in descending order is ");
    for(i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
}
