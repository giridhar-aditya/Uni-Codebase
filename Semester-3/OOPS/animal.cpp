#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class animals{
    string name;
    public:
    animals(){
        cout<<"enter name of animal:";
        cin>>name;
    }
    int length(){
        return name.length();
    }
    string strong(animals &obj){
        if(this->length()>obj.length()){
            return this->name;
        }
        else{
            return obj.name;
        }
    }
};
int main(){
    string strong;
    animals an1,an2;
    strong=an1.strong(an2);
    cout<<"strong animal:"<<strong;
}