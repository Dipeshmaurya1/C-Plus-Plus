#include<iostream>
using namespace std;

class Customer
{
	int id,age,simcardValidity;
	string name,city,telecombrandName,number,line;
	
	public:
	void Set()
	{
		cout<<"Enter ID: ";
		cin>> id;
		getline(cin, line);
		cout<<"Enter Name: ";
		getline(cin,name);
		cout<<"Enter Age: ";
		cin>> age;
		cout<<"Enter City: ";
		cin>> city;
		getline(cin,line);
		cout<<"Enter Mobile Number: ";
		getline(cin, number);
		cout<<"Enter Simcard Validity: ";
		cin>> simcardValidity;
		getline(cin,line);
		cout<<"Enter Telecom Company Name: ";
		getline(cin,telecombrandName);
		cout<<endl;
	}	
	void Get()
	{
		cout<<"ID : "<<id<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"City: "<<city<<endl;
		cout<<"Mobile Number: "<<number<<endl;
		cout<<"Simcard Validity: "<<simcardValidity<<endl;
		cout<<"Telecom Company: "<<telecombrandName<<endl;
	}
};
int main()
{
	Customer c[6];
	int i;
	for(i=1; i<6; i++)
	{
		c[i].Set();
	}
	for(i=1; i<6; i++)
	{
		cout<<endl<<"Student: "<<i<<endl;
		c[i].Get();
	}
}





