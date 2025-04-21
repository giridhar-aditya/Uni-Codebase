#include<stdio.h>
#include<math.h>
int oct(int d);
int bin(int d);
int hex(int n);
int main () {
    int d;
    printf("Enter your decimal number :");
    scanf("%d",&d);
    printf("THE BINARY VALUE IS %d\n",bin(d));
    printf("THE OCTAL VALUE IS %d\n",oct(d));
    printf("THE HEXA DECIMAL VALUE IS ");
    hex(d);
}
int bin(n){
    int bin=0,i=0;
    while(n!=0){
        bin+= (n%2)*pow(10,i);
        i++;
        n/=2; 
    }
    return bin;
}
int oct(n){
    int oct=0,i=0;
    while(n!=0){
        oct+= (n%8)*pow(10,i);
        i++; 
        n/=8;
    }
    return oct;
}
int hex(n){
    int hex,i=0,j;
    int hex2[100];
    while(n!=0){
        hex = n%16;
        if (hex<10)
            hex+=48;
        else 
            hex+=55;
        hex2[i]=hex;
        i++;
        n/=16;}
    for(j=i-1;j>=0;j--){
        printf("%c",hex2[j]);
    }
    


}
