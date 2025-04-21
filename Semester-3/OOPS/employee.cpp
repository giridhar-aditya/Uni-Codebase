#include<iostream>
using namespace std;
class employee{
    char name[20];
    long emp_no;
    public:
    void getdata(){
        cout<<"Enter the Employee Name :"; cin>>name;
        cout<<"Enter the Employee Number :"; cin>>emp_no;
    }
    void putdata(){
        cout<<"Employee Name :"<<name<<endl;
        cout<<"Employee Number :"<<emp_no<<endl;
    }
};
int main(){
    employee E[2];
    for(int i=0;i<2;i++){
        cout<<"Enter Input for "<<i+1<<" Data\n";
        E[i].getdata();
    }
    cout<<"\nNow Displaying All Data\n";
    for(int i=0;i<2;i++){E[i].putdata();}
}