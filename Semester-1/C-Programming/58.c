#include<stdio.h>
int vowels (char a[],int l){
    int vow; 
    if(l>0){
        switch(a[l-1]){
            case 'a':case 'e':case 'i':case 'o':case 'u':
            case 'A':case 'E':case 'I':case 'O':case 'U':
            vow=1; break; 
            default : vow=0; break;
            
        } return vow + vowels(a,--l);}
    else return 0;
   
}
int num(char a[],int l){
    int nu;
    if(l>0){
        if(a[l-1]>= '0' && a[l-1]<= '9')
        nu=1;
        else 
        nu=0;
        return nu + num(a,--l);}
    else return 0;  
    }
int u_case(char a[],int l){
    int u;
    if(l>0){
        if(a[l-1]>= 'A' && a[l-1]<= 'Z')
        u=1;
        else 
        u=0;
        return u + u_case(a,--l);
    }
    else return 0;
}
int l_case(char a[],int l){
    int lc;
    if(l>0){
        if(a[l-1]>= 'a' && a[l-1]<= 'z')
        lc=1;
        else 
        lc=0;
        return lc + l_case(a,--l);
    }
    else return 0;
}
void main(){
    int n;
    printf("Enter the length of the array :");
    scanf("%d",&n);
    char a[n+1];    
    printf("Enter the Input for Array :");
    scanf("%c",&a);
    gets(a);
    printf("THE VOWELS : %d\n",vowels(a,n));
    printf("THE NUMBERS : %d\n",num(a,n));
    printf("THE UPPER CASE : %d\n",u_case(a,n));
    printf("THE LOWER CASE : %d",l_case(a,n));
}
