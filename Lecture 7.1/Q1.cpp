#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter Value of A for Division: ";
	cin>> a;
	cout<<"Enter Value of B for Division: ";
	cin>> b;
	cout<<endl;
	try
	{
		if(b==0)
		{
			throw b;
		}
		else
		{
			c=a/b;
			cout<<"Divisio is: "<<c<<endl;
		}
	}
	catch(...)
	{
		cout<<"Value Cannot be Divide by ZERO...";
	}
	
	
	
	return 0;	
}