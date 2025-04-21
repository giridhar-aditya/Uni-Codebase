#include<stdio.h>
int largest (int max,int l,int a[]){
    if(l==0){return max;}
    else {
        if(l>0){
            if(a[l-1]>=max){ max=a[l-1];
            }
            largest(max,--l,a);
        }
    }
    
}
int smallest (int min,int l,int a[]){
    if(l==0){return min;}
    else {
        if(l>0){
            if(a[l-1]<=min){ min=a[l-1];
            }
            smallest(min,--l,a);
        }
    }
}
void main() {
    int a[100],n,i;
    printf("Enter the Range of Numbers :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter element %d :",i+1);
        scanf("%d",&a[i]);
    }
    printf("THE LARGEST NUMBER IS %d\n",largest(a[n-1],n,a));
    printf("THE SMALLEST NUMBER IS %d",smallest(a[n-1],n,a));
    return 0;
}