#include<iostream>
using namespace std;
static int a=0,b=0;
class count{
    public:
    void print(){cout<<"No of Times Constructor was called :"<<a<<endl;}
    count(){a++;}
    ~count(){++b;}
};
class exe{
    public:
    exe(){}
    ~exe(){cout<<"No of Times Desstructor was called :"<<b<<endl;}
};
int main(){
    exe E;
    count C[19],B;
    B.print();
}