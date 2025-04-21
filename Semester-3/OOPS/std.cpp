#include<iostream>
using namespace std;
class Student{
	private:
	char name[20];
	int roll_no;
	long long phone_no;
	public:
	void getdata();
	void putdata();
	int checkname(char n[]);
};
void Student :: getdata(){
	cout<<"Enter the Name of the Student : "; cin>>name;
	cout<<"Enter the roll number : "; cin>>roll_no;
	cout<<"Enter the phone number : "; cin>>phone_no;
	cout<<"Data Input Successfull !!!";
	return;
}
void Student :: putdata(){
	cout<<"Name of the Student : "<<name<<endl;
	cout<<"roll number : "<<roll_no<<endl;
	cout<<"phone number : "<<phone_no;
	return;
}
int Student :: checkname(char n[]){
	int i=0;
	while(i<sizeof(n)){
		if(n[i]==name[i]){i++; continue;}
		else{return 0;}
	}
	return 1;	
}
int main(){
	int n=0,x,y=0,i;
	char ch = 'y';
	Student S[100];
	while(ch=='y'){
		char name[20];
		cout<<"Press 1 to Add Record"<<endl<<"Press 2 to Display Record"<<endl<<"Choice : "; cin>>x;
		if(x==1){S[n].getdata(); n++;}
		else if(x==2){
			cout<<"Enter the Name of the Student :"; cin>>name;
			for(i=0;i<=n+1;i++){
				y = S[i].checkname(name);
				if(y==1){S[i].putdata(); break;}
			}
			if(y==0){cout<<"No Matching Student Data Found";}
		}
		else{cout<<"Invalid Choice !!!";}
		cout<<endl<<"Do you want to continue Using this Application (y/n) :"; cin>>ch;
		if(ch=='n'){cout<<"Thank You for Using the Application";}
	}
	return 0;
}
	
			
		
