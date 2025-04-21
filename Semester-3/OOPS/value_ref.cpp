//Return by Value, Return by Reference
#include<iostream>
using namespace std;
int rbvalue(int a){
    a = a*3;
    return a;
}
int rbref(int* p){
    int result;
    *p = *p*10;
    result = *p;
    return result;
}
int main(){
    int a=10,b,c;
    cout<<"The Original Value of a :"<<a<<endl;
    b = rbvalue(a);
    cout<<"The Result of Return by Value :"<<b<<endl;
    cout<<"Value of a after return by Value :"<<a<<endl;
    c = rbref(&a);
    cout<<"The Result of Return by Reference :"<<c<<endl;
    cout<<"Value of a after return by reference :"<<a<<endl;
}