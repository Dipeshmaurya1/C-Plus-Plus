#include<iostream>
using namespace std;

main()
{
	int st,en,leap;
	cout<<"Enter Starting Year:";
	cin>> st;
	cout<<"Enter Ending Year:";
	cin>> en;
	leap=en-st;
	leap/=2;
	int a[leap];
	int i,j=0;
	if(st>=1900&&en<=2500)
	{
		cout <<"The Leap Years Are: ";
		for(i=st; i<=en; i++)
		{
			if(i%4==0)
			{
				a[j]=i;
				cout <<a[j]<<",";
				j++;
			}
		}
	}
	else
	{
		cout << "Enter Years Between 1900 to 2500 !!"<<endl;
	}
}