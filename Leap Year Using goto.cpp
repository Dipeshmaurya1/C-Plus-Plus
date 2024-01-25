#include<iostream>
using namespace std;

main()
{
	int st,en,leap;
	start:
	cout<<"Enter Starting Year:";
	cin>> st;
	cout<<"Enter Ending Year:";
	cin>> en;
	leap=en-st;
	leap/=2;
	int a[leap];
	int i,j=0;
	if(st>=2000&&en<=2500)
	{
		cout<<endl;
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
		cout << "Enter Years Between 2000 to 2500 !!"<<endl;
		goto start;
	}
}