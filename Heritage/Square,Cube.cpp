#include<iostream>
using namespace std;

class Numbers
{
	protected :
	void Val()
	{
		int n;
		cout<<"Enter The Value: ";
		cin>> n; 
	}
};

class Square: public Numbers
{
	public:
	void Squ()
	{
		Val()
		int square;
		square=n*n;
		cout<<"The Square is: "<< square<<endl;
	}
};

class Cube: public Numbers
{
	public:
	void Cub()
	{
		Val()
		int cube;
		cube=n*n*n;
		cout<<"The Cube is: "<<cube<<endl;
	}	
};

int main()
{
	Square s1;
	s1.Squ();
	Cube c1;
	c1.Cub();
	return 0;
}