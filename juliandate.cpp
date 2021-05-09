#include<iostream>
using namespace std;

class calculation
{
	public:
		int date,year;
		int julian;
		
		
		int getvalue()
		{
		
		cout<<endl<<"Enter Date:";
		cin>>date;
		cout<<endl<<"Enter Month:";
		cin>>year;
		
		julian=(year-1)*30+date;
		
		cout<<"Julian Date :"<<julian;	  	  
		}

};

int main()
{
calculation *x=new calculation();

x->getvalue();

}


