/*Program to demonstrate Abstract class and Pure virtual function.*/
#include<iostream>
using namespace std;
class Base{ public: virtual void show(){}};
class Derived : public Base{ public: void show(){cout<<" Virtal Function from Derived Class";}};
int main(){
    Base *b; Derived d;
    b = &d; 
    b->show();
}
