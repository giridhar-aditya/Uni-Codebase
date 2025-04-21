#include<iostream>
using namespace std;
class carpart{	
	public:
	int car_id;
	int ch_ph;
	float hour;
	void putdata();
	void getdata();
};
void carpart :: putdata(){
	cout<<"The Charges for CAR :"<<car_id<<endl;
	cout<<"Charges/hour :"<<ch_ph<<endl;
	cout<<"Total Time :"<<hour;
}
void carpart :: getdata(){
	cout<<"Enter the car id :"; cin>>car_id;
	cout<<"Enter the charge/hour :"; cin>>ch_ph;
	cout<<"Enter the Total Hours of Parking :"; cin>>hour;
	cout<<"The data was succesfully added";
}
int main(){
	int n=0,x,ID;
	carpart c[100];
	char ch = 'y';
	while(ch=='y'){
		cout<<"Press 1 for new entry\nPress 2 for Searching\n";
		cin>>x;
		if(x==1){c[n].getdata(); n++;}
		else if(x==2){cout<<"Enter the car id :"; cin>> ID;
			for(int i=0;i<n;i++){
				if(c[i].car_id==ID){c[i].putdata(); break;}
			}
			
		}
		else{cout<<"INVALID INPUT";}
		cout<<"\nDo you want to continue(y/n) :"; cin>>ch;
	}
}	
	


