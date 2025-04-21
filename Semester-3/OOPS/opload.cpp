#include<iostream>
class add{
	int num1, num2;
	public:
	add(){num1 = 555; num2= 10;}
	void operator ++(){num1+=num2;}
	void print(){std::cout<<"The Sum is :"<<num1; }
};
int main(){
	add x;
	++x;
	x.print();
}
	
