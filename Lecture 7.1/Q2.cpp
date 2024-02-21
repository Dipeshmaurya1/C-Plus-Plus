#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter Age For Vote: ";
	cin>> a;
	cout<<endl;
	try
	{
		if(a<18)
		{
			throw a;
		}
		else
		{
			cout<<"He/She is Eligible:)";
		}
	}
	catch(...)
	{
		cout<<"He/She is Not Eligible...";
	}
	
	
	
	return 0;	
}