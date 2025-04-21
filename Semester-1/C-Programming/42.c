#include<stdio.h>
int largest(int x[],int l);
int smallest(int x[],int l);
void main() {
    int a[100],n,i;
    printf("Enter the Range of Numbers :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter element %d :",i+1);
        scanf("%d",&a[i]);
    }
    printf("THE LARGEST NUMBER IS %d\n",largest(a,n));
    printf("THE SMALLEST NUMBER IS %d",smallest(a,n));
    return 0;
}
int largest (int a[],int l){
    int max=a[0];
    while(l>0){ 
        if (a[l-1]>max){
        max = a[l-1];
        --l;
    }
    return max;
}}
int smallest (int a[],int l){
    int min=a[0];
    while(l>1){ 
        if (a[l-1]<min){
        min = a[l-1];
        --l;
        printf("%d",min);
    }
    return min;
}
}