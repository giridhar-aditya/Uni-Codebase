//Write a C++ program to find prime numbers between two intervals
#include<iostream>
using namespace std;
int main(){
    int s,e,i;
    cout<<"Enter the Start Point :";
    cin>>s;
    cout<<"Enter the End Point :";
    cin>>e;
    cout<<"The Prime Numbers :";
    for(int i=s;i<=e;i++){
        if(i==2 || i==1){continue;}
        int prime=1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){ prime =0; break;}
        }
        if(prime==1) cout<<i<<" ";
    }
}