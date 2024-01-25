#include<iostream>
using namespace std;

main()
{
	int feet,inch;
	cout<<"Enter Feet:";
	cin>> feet;
	cout<<"Enter Inches:";
	cin>> inch;
	cout<<endl;
	int totalinch=(feet*12)+inch;
	int tfeet=totalinch/12;
	int tinch=totalinch%12;
	cout<<"Total Feet is:"<<tfeet<<endl<<"Total Inches is:"<<tinch;
}