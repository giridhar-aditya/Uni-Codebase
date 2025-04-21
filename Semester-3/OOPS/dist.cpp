#include<iostream>
using namespace std;
class Distance{	
	public:
	int feet;
	float inch;
	void avgdistance(){
		feet/=10;
		inch/=10;
		cout<<"Average Distance : "<<feet<<" Feet and "<<inch<<" inches";
		}
	};
int main(){
	Distance d[10];
	int i,feet; float inch;
	for(i=0;i<10;i++){
		cout<<"Enter the Data for Distance "<<i+1<<"\n";
		if(i==0){
		cout<<"Feet :"; cin>>d[i].feet;
		cout<<"inch :"; cin>>d[i].inch;}
		else{
		cout<<"Feet :"; cin>>feet; d[i].feet = d[i-1].feet + feet;
		cout<<"inch :"; cin>>inch; d[i].inch = d[i-1].inch + inch;}
	}
	d[i-1].avgdistance();
}
