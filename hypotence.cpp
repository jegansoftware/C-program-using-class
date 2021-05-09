#include<iostream>
#include<cmath>
using namespace std;

class calculation
{
public:
	
	float a,b,c;
	
	int getvalue()
	{
	
	cout<<endl<<"Enter The value of A:";	
	cin>>a;
	cout<<endl<<"Enter The value of B :";
	cin>>b;
	c=sqrt(a*a +b*b);
	}
	
	int print()
	{
	cout<<endl<<"The Value of A:"<<a;
	cout<<endl<<"The Value of B:"<<b;
	cout<<endl<<"Hypotence:"<<c;
	}
	
};

int main()
{
calculation *exe=new calculation();

exe->getvalue();
exe->print();
}

