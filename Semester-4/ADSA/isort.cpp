#include<iostream>
using namespace std;
int c;
int main(){
    int a[] = {5,4,3,2,1};
    int n = 5,key,j;
    for (int i=1;i<n;i++){
        key =a[i]; j=i-1;
        while(j>=0 && a[j]>=key){c++; a[j+1]=a[j]; j--;}
        a[j+1] = key;
        c++;
    }
    for(int i=0;i<n;i++){cout<<a[i]<<" ";}
    cout<<"Active Operations :"<<c;
}