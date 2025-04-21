/*Write a C++ program that contain two classes named as Account1 and Account2, representing two bank accounts.
Use a friend function name as  transferAmount(), that allows you to transfer funds between these accounts and update their balances.*/
#include<iostream>
using namespace std;
class Account2;
class Account1 {
    int balance; 
    public:
    friend void transferAmount(Account1, Account2,int);
    Account1(int n):balance(n){} 
};
class Account2 {
    int balance; 
    public:
    friend void transferAmount(Account1, Account2,int);
    Account2(int n):balance(n){} 
};
void transferAmount(Account1 a,Account2 b,int n){
    a.balance -= n; b.balance += n; 
    cout<<"Transferer Balance :"<<a.balance<<endl;
    cout<<"Reciever Balance :"<<b.balance<<endl;}
int main(){
    int n;
    cout<<"Enter the Bank Balance of Transferer :"; cin>>n; Account1 a(n);
    cout<<"Enter the Bank Balance of Reciever :"; cin>>n; Account2 b(n);
    cout<<"Enter the Transfer Amount :"; cin>>n; transferAmount(a,b,n);
}