#include<stdio.h>
int rev(int a[],int l){
    if(l>0){ printf("%d\t",a[l-1]); rev(a,--l);}
}
void main(){
    int a[100],n;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter element %d :",i+1);
        scanf("%d",&a[i]);
    }
    printf("The reversed Array :\n");
    rev(a,n);
}