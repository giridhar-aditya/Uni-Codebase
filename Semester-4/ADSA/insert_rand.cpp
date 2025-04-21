#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int n=1000;
	int a[n],temp;
	for(int i=0;i<n;i++){a[i] = rand() % n;}
	cout<<"Original Array :";
	for(int i=0;i<n;i++){cout<<a[i]<<" ";}
	for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if(a[j] > a[j+1]){
		temp = a[j];
		a[j] = a[j+1];
		a[j+1] = temp;}
	}}
	cout<<"Sorted Array :";
	for(int i=0;i<n;i++){cout<<a[i]<<" ";}
}
