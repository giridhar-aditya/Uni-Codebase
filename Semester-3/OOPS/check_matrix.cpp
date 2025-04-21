/*Write a program to check whether the given matrix is Symmetric, Skew symmetric,
Diagonal or Identity.*/
#include<iostream>
using namespace std;
int main(){
    int n,diag=0,iden=0,symm=0,skew=0;
    cout<<"Enter the Order of the Matrix :";
    cin>>n;
    int A[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter Element"<<i+1<<j+1<<":";
            cin>>A[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(A[i][j]==0 && i!=j){
                for(int k=0;k<n;k++){if(A[k][k]==1) iden=1; else{iden=0; break;}}
            }
            else if(A[i][j]!=0 && i!=j){
                diag=diag+1;
                for(int k=0;k<n;k++){if(A[k][k]==0) skew=1;}
                if(A[i][j]==A[j][i] && i!=j){symm=1;}                
            }
        }
    }
    if(iden==1){cout<<"It is an Identity Matrix"<<endl;}
    if(diag==0){cout<<"It is a Diagonal Matrix"<<endl;}
    if(symm==1){cout<<"It is a Symmetric Matrix"<<endl;}
    if(skew==1){cout<<"It is a Skew Symmetric Matrix"<<endl;}
}