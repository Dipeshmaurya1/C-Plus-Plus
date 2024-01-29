#include<iostream>
using namespace std;

class Employee_detail
{
	public:
	int id,age,salary,experience;
	string name,role,city,company,line;
	
	void input()
	{
		cout<<"Enter Employee Id: ";
		cin>> id;
		getline(cin, line);
		cout<<"Enter Employee Name: ";
		getline(cin, name);
		cout<<"Enter Employee Age: ";
		cin>> age;
		getline(cin, line);
		cout<<"Enter Employee Role: ";
		getline(cin, role);
		cout<<"Enter Employee Experience: ";
		cin>> experience;
		cout<<"Enter Employee Salary: ";
		cin>> salary;
		getline(cin, line);
		cout<<"Enter Employee Company Name: ";
		getline(cin, company);
		cout<<"Enter Employee City: ";
		getline(cin, city);
		cout<<endl;
	}	
	void output()
	{
		cout<<"ID : "<<id<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Role: "<<role<<endl;
		cout<<"Experience: "<<experience<<endl;
		cout<<"Salary: "<<salary<<endl;
		cout<<"Company Name: "<<company<<endl;
		cout<<"City: "<<city<<endl<<endl;
	}
};

int main()
{
	Employee_detail e1;
	
	int i;
	for(i=1;i<=5;i++)
	{
		e1.input();
	}
	for(i=1;i<=5;i++)
	{
		cout<<"Employee: "<<i<<endl;
		e1.output();
	}
	return 0;
}





