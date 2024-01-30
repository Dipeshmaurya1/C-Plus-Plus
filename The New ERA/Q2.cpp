#include<iostream>
using namespace std;

class Converting
{
	public:
	int hour,minute,second,remainSecond;
	
	void input()
	{
		cout<<"Enter Seconds: ";
		cin>> second;
	}
	void output()
	{
		if(second==0)
		{
			cout<<"Enter Second more Than 0!!";
		}
		hour=second/3600;
		minute=(second%3600)/60;
		remainSecond=second%60;
		cout<<hour<<":"<<minute<<":"<<remainSecond<<endl;
	}
};
int main()
{
	Converting c1;
	c1.input();
	c1.output();
}
