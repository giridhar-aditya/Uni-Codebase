#include<iostream>
using namespace std;
int cr(int p[],int n){
    if(n==0){return 0;}
    int q = -999,r1;
    for(int i=0;i<n;i++){
        r1 = cr(p,n-i-1);
        if(p[i]+r1 > q){q = p[i]+r1;}
    }
    return q;
}
int main(){
    int n; cout<<"Enter the Size of Rod :"; cin>>n; int p[n];
    for(int i=0;i<n;i++){cout<<"Profit in "<<i+1<<" inch rod :"; cin>>p[i];}
    cout<<"Maximum Profit is :"<<cr(p,n);
}