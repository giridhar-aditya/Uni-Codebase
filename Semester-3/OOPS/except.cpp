#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fptr("sample.txt");
    int n,i,j; cout<<"Enter Range :"; cin>>n;
    bool prime;
    for(i=2;i<n;i++){
        prime = true;
        for(j=2;j<=i/2;j++){if(i%j==0){prime = false;}}
    try{if(prime){throw (i);}}    
    catch(int a){fptr<<i<<" ";}}
}