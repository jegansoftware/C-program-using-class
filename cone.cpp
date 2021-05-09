#include<iostream>
#include<cmath>
using namespace std;

class calculation
{
	public:	
		float h,r;
		float volume;
		
			int getvalue()
			{
				cout<<endl<<"Enter Height Of Cone :";
				cin>>h;
				cout<<endl<<"Enter Radius Of Cone :";
				cin>>r;
				volume=1.0/3*22.0/7*pow(r,2)*h;
			}
			
			int print()
			{
			cout<<endl<<"Height of cone:"<<h;
			cout<<endl<<"Radius of cone:"<<r;
			cout<<endl<<"Volume of cone:"<<volume;
			}			

};

int main()
{
calculation *t=new calculation();

t->getvalue();
t->print();
}

