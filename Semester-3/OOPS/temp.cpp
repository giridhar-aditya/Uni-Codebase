//Write a program to store temperature of two cities for a week and display it
#include<iostream>
using namespace std;
int main(){
    int A[2][7],i,j;
    for(i=0;i<2;i++){
        for(j=0;j<7;j++){
            cout<<"Enter the Climate of CITY "<<i+1<<" for DAY "<<j+1<<" :";
            cin>>A[i][j];
        }
    }
    cout<<"The Climate Chart :";
    for(i=0;i<2;i++){
        cout<<endl<<"CITY "<<i+1<<" :";
        for(j=0;j<7;j++){
            cout<<" "<<A[i][j];
        }
        cout<<endl;
    }
}
