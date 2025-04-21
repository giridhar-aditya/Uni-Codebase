/*Write a program which takes PIN number of the user as input and then verifies his pin. If pin
is verified the program shall display “Pin verified” and “Welcome”; otherwise the program shall
give user another chance. After 3 wrong attempts, the program shall display “Limit expired” and
then exit. Use for loops to implement the logic*/
#include<iostream>
using namespace std;
int main(){
    int pin=1234,n;
    for(int i=0;i<3;i++){
        cout<<endl<<"Enter your PIN :";
        cin>>n;
        if(n==pin){cout<<"Pin Verified"<<endl<<"Welcome"; break;}
        else if(i!=2){cout<<endl<<"Wrong Pin :"<<"You have "<<2-i<<" Chances Left";}
        else {cout<<endl<<"Limit Expired, Try Again Later";}
    }
}