#include<iostream> 
class complex{
	int real,imag;
	public:
	complex(int a=0,int b=0){ real=a; imag=b;}
	complex operator +(complex keer){
		complex result;
		result.real= real + keer.real; result.imag= imag +keer.imag;
		return result;}
	void display(){std::cout<<real<<"+ "<<imag<<"i";}
};
int main(){
	complex x(20,15),y(12,54),k(1,2);
	complex z = x+k + y;
	z.display();
}
