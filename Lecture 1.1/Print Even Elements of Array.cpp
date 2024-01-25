//Q.1 Write a Program to find all even elements from a given 1D array.
#include<iostream>
using namespace std;

main()
{
	int n,i;
	//take user input for size.
	cout<< "Enter The Size of Array:";
	cin>> n;
	
	int a[n];
	//run loop to get Elements according to the Size of array.
	for(i=0;i<n;i++)
	{
		cout<<"Enter Elements of Array a["<<i<<"]";
		cin>> a[i];
	}
	cout<<endl;
	cout<<"Elements of Array Are:";
	//print all the elements given by user by running a loop. 
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<",";
	}
	cout<<endl;
	cout<<"Even Elements Are:";
	//run a loop and use "if" statement to print only even Elements. 
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout<< a[i]<<",";
		}
	}
}