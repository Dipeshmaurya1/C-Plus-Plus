#include<iostream>
using namespace std;

class Car_detail
{
	
	public:
		
	int id,release_date;
	string company_name,colour,model,line;
	
	void input()
	{
		cout<<"Enter Car ID: ";
		cin>> id;
		getline(cin,line);
		cout<<"Entre Company Name: ";
		getline(cin,company_name);
		cout<<"Entre Car Model : ";
		getline(cin,model);
		cout<<"Entre Car Colour: ";
		getline(cin,colour);
		cout<<"Enter Cars Release Date";
		cin>> release_date;
	}
	void output()
	{
		cout<<"Car ID: "<<id<<endl;
		cout<<"Company Name: "<<company_name<<endl;
		cout<<"Car Model: "<<model<<endl;
		cout<<"Car Colour: "<<colour<<endl;
		cout<<"Car Release Date: "<<release_date<<endl<<endl<<endl;
	}
};
int main()
{
	Car_detail c1;
	
	int i;
	for(i=1;i<=4;i++)
	{
		c1.input();
	}
	for(i=1;i<=4;i++)
	{
		cout<<"CAR: "<<i<<endl;
		c1.output();
	}
	return 0;
}




















