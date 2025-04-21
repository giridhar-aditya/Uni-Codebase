#include<iostream>
using namespace std;
class Part{
	private:
	char part_name[20];
	int part_no;
	int cost;
	public:
	void setpart(){
		cout<<"Enter the Part Name :"; cin>>part_name;
		cout<<"Enter the Part Number :"; cin>>part_no;
		cout<<"Enter the Cost :"; cin>>cost;
	}
	void showpart(){
		cout<<"Part Name : "<<part_name<<endl;
		cout<<"Part Number : "<<part_no<<endl;
		cout<<"Total Cost : "<<cost;
	}
};
int main(){
	Part p1;
	p1.setpart();
	cout<<"The Data you entered was"<<endl;
	p1.showpart();
	return 0;
}
		
