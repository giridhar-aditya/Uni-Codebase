#include<iostream> 
#include<string.h>
using namespace std; static int a=0;
class Details{
    char name[20]; char area[20];
    int area_code; long long phone_num;
    public:
    Details(){
        cout<<"Customer Data "<<++a<<endl;
        cout<<"Enter Customer Name :"; cin>>name;
        cout<<"Enter Area Name : "; cin>>area;
        cout<<"Enter Area code : "; cin>>area_code;
        cout<<"Enter Phone Number : "; cin>>phone_num;
    }
    void Display(){
        cout<<"Customer Name : "<<name<<endl;
        cout<<"Area : "<<area<<endl;
        cout<<"Full Phone Number : "<<area_code<<"-"<<phone_num<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter the Number of Entries :"; cin>>n;
    Details D[n];
    cout<<endl<<"All the Records are given Below"<<endl;
    for(int i=0;i<n;i++){D[i].Display();}
}