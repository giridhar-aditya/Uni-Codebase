#include<iostream>
#include<fstream>
using namespace std;
class Student{
    public:
    int r; string name,dept;
    Student(int a , string b, string c): r(a),name(b),dept(c){}
};
int main(){
    int a; string b,c,row;
    Student A(4,"Sai Rishi","Bio-Tech");
    fstream fptr("sample.txt",ios::app);
    fptr<<A.r<<" "<<A.name<<" "<<A.dept<<"\n";
    cout<<"Roll"<<" Name "<<"Dept"<<endl;
    ifstream ifptr("sample.txt");
    while(getline(ifptr,row)){
        cout<<row<<endl;      
    }
}