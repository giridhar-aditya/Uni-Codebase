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
    char c;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    scanf("%c",&c);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter the %d element:",i+1);
        scanf("%c",&c);
        arr[i]=c;
        scanf("%c",&c);
    }
    asc(arr,n);
    printf("\nThe array sorted in ascending order is ");
    for(i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
    desc(arr,n);
    printf("\nThe array sorted in descending order is ");
    for(i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}