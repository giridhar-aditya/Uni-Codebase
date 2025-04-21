#include<stdio.h>
int vowels(char a[], int l);
int numbers(char a[],int l);
int u_case(char a[],int l);
int l_case(char a[],int l);
int main () {
    int n,i;
    printf("Enter the length of the array :");
    scanf("%d",&n);
    char a[n+1];    
    printf("Enter the Input for Array :");
    scanf("%s",a);
    printf("THE NUMBER OF VOWELS : %d\nTHE NUMBER OF NUMERICALS : %d\nTHE NUMBER OF UPPER CASE : %d\nTHE NUMBER OF LOWER CASE : %d",
    vowels(a,n),numbers(a,n),u_case(a,n),l_case(a,n));
}
int vowels(char a[],int l){
    int i,vow=0;
    for(i=0;i<l;i++){
        switch(a[i]){
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
            vow++;            
        }
    }
    return vow;
}
int numbers(char a[],int l){
    int i,num=0;
    for(i=0;i<l;i++){
        if(a[i]>= '0' && a[i]<= '9')
        num++;
    }
    return num;
}
int u_case(char a[],int l){
    int i,u=0;
    for(i=0;i<l;i++){
        if(a[i]>='A' && a[i]<='Z')
        u++;
    }
    return u;
}
int l_case(char a[],int l){
    int i,L=0;
    for(i=0;i<l;i++){
        if(a[i]>='a' && a[i]<='z')
        L++;
    }
    return L;
}