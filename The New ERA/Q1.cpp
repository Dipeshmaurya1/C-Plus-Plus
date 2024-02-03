#include<iostream>
using namespace std;

class Converting
{
	public:
	int feet1,inch1,feet2,inch2,tfeet,tinch;
	void input()
	{
		cout<<"Input 1==>";
		cout<<"Feet: ";
		cin>> feet1;
		cout<<"Inch: ";
		cin>> inch1;
		cout<<endl<<"Input 2==>";
		cout<<"Feet: ";
		cin>> feet2;
		cout<<"Inch: ";
		cin>> inch2;
	}	
	void output()
	{
		tfeet=feet1+feet2+inch1/12+inch2/12;
		tinch=inch1%12+inch2%12;
		cout<<"Feet: "<<tfeet<<"Inch:"<<tinch;
	}
};
int main()
{
	Converting c;
	c.input();
	c.output();
	return 0;
}
















