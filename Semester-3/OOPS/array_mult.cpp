//a program to multiply the given array elements
#include<iostream>
using namespace std;
int main(){
    int k,n;
    cout<<"Enter the Number of Elements in Array :"; cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cout<<"Enter Element "<<i+1<<":"; cin>>A[i];
    }
    cout<<endl<<"Enter the Scalar Multiplicant :"; cin>>k;
    cout<<"The New Array :";
    for(int i=0;i<n;i++){
        A[i]=A[i]*k;
        cout<<A[i]<<" ";
    }
}