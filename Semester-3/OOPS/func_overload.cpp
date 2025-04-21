//Function Overloading in C++
#include<iostream>
using namespace std;
int add(int x,int y){return x+y;}
int add(int x,int y,int z){return x+y+z;}
int main(){
    int x,y,z;
    cout<<"Enter the 3 Numbers :"; cin>>x>>y>>z;
    cout<<"Addition of Two Numbers :"<<add(x,y)<<endl;
    cout<<"Addition of Three Numbers :"<<add(x,y,z);
}