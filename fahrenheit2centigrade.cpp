#include<iostream>
using namespace std;
class calculation
{
	public:
		float f,c;
		
		int getvalue()
		{
		cout<<"Enter Fahrenheit :";
		cin>>f;
		c=5.0/9*(f-32);
		}
				
		int call()
		{
		cout<<endl<<"Fahrenheit :"<<f;
		cout<<endl<<"Centigrade :"<<c;
		}
		
};

int main()
{
calculation *t=new calculation();
t->getvalue();
t->call();

}

