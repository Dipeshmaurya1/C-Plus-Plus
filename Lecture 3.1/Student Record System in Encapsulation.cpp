#include<iostream>
using namespace std;

class Student
{
	int id,age;
	string name,course,city,email,collage,line;
	
	public:
	void Set()
	{
		cout<<"Enter Student ID: ";
		cin>> id;
		getline(cin, line);
		cout<<"Enter Student Name: ";
		getline(cin,name);
		cout<<"Enter Student Age: ";
		cin>> age;
		getline(cin,line);
		cout<<"Enter Student Course: ";
		getline(cin,course);
		cout<<"Enter City Name: ";
		cin>> city;
		cout<<"Enter E-mail: ";
		cin>> email;
		getline(cin,line);
		cout<<"Enter Collage Name: ";
		getline(cin,collage);
		cout<<endl;
	}	
	void Get()
	{
		cout<<"ID : "<<id<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Course: "<<course<<endl;
		cout<<"City: "<<city<<endl;
		cout<<"E-mail: "<<email<<endl;
		cout<<"Collage Name: "<<collage<<endl;
	}
};
int main()
{
	Student s[6];
	int i;
	for(i=1; i<6; i++)
	{
		s[i].Set();
	}
	for(i=1; i<6; i++)
	{
		cout<<endl<<"Student: "<<i<<endl;
		s[i].Get();
	}
}





