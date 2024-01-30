#include<iostream>
using namespace std;

class Converting
{
	public:
	int feet1,inch1,feet2,inch2,feet,inch;
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
		feet=feet1+feet2+inch1/12+inch2/12;
		inch=inch1%12+inch2%12;
		cout<<"Feet: "<<feet<<"Inch:"<<inch;
	}
};
int main()
{
	Converting c1;
	c1.input();
	c1.output();
	return 0;
}
















