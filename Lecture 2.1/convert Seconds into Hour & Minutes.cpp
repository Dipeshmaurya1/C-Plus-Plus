#include<iostream>
using namespace std;

class Seconds
{
	public:
	int h,m,s,rs;
	void input()
	{
		cout<<"Enter Seconds: ";
		cin>> s;
	}
	void output()
	{
		h= s/3600;
		m=(s%3600)/60;
		rs=s%60;
		cout<<"The Time is=  "<<h<<":"<<m<<":"<<rs<<endl;
	}
};
int main()
{
	Seconds s1;
	s1.input();
	s1.output();
	
	return 0;
}
