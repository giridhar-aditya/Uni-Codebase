//Inline Function to return the square of a number
#include<iostream>
using namespace std;
inline int square(int a){
    return a*a;
}
int main(){
    int a;
    cout<<"Enter the Number  :"; cin>>a;
    cout<<"The Square of the Number is :"<<square(a);
}