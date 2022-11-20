#include<iostream>
using namespace std;

class complex{
	private:
		int real;
		int imag;
		public:
			void getcomplex();
			complex Addcomplex(complex);
			void display();
			
};
void complex::getcomplex()
{
	cout<<"enter real parts"<<endl;
	cin>>real;
	cout<<"enter imaginary part"<<endl;
	cin>>imag;
}
void complex::display()
{
	cout<<"the sum is \n";
	if(imag>0)
	cout<<real<<"+"<<imag;
	else
	cout<<real<<"-"<<(-1)*imag;
	
}
complex complex::Addcomplex(complex c)
{
	complex ob;
	ob.real=real+c.real;
	ob.imag=imag+c.imag;
	return (ob);
	
}
int main(){
	complex first,second,result;
	cout<<"enter first complex number";
	first.getcomplex();
	cout<<"enter second complex number";
	second.getcomplex();
	result=first.Addcomplex(second);
	result.display();
}
