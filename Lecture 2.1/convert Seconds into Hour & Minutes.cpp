#include<iostream>
using namespace std;

int main()
{
	int second,minutes,hours,remain_seconds;
	
	cout<<"Enter Number of Seconds: ";
	cin>> second;
	if(second<0)
	{
		cout<<"Please Enter Second more than 0 !!";
	}
	hours= second/3600;
	minutes=(second%3600)/60;
	remain_seconds=second%60;
	cout<<"The Time is=  "<<hours<<":"<<minutes<<":"<<remain_seconds<<endl;
}
