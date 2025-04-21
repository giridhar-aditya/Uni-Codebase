#include<iostream>
class minus{
	int a,b;
	public:
	minus(int x,int y){ a=x; b=y; std::cout<<"\nC :"<<a-b;}
	minus operator +(){ a=-a; b=-b; return minus(a,b);}
	void display(){std::cout<<"\nA :"<<a<<"\tB :"<<b;}
};
int main(){
	minus a(10,14);
	a.display();
	+a;
	a.display();
}
