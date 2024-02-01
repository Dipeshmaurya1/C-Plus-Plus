#include<iostream>
using namespace std;

class Hotel
{
	int id,rating,staffQuantity,roomQuantity;
	string type,location,line;
	static int Established_year;
	static string hotel_name;
	
	public:
	
	void Setter(int a)
	{
		cout<<"Enter Room ID: ";
		cin>> id;
		getline(cin,line);
		cout<<"Enter Type (Hotel or Motel): ";
		getline(cin,type);
		cout<<"Enter Rating of Hotel/Motel: ";
		cin>> rating;
		getline(cin,line);
		cout<<"Enter City: ";
		getline(cin,location);
		cout<<"Enter Staff Quantity: ";
		cin>> staffQuantity;
		cout<<"Enter Room Quantity: ";
		cin>> roomQuantity;
		cout<<endl;
	}
	void Getter(int a)
	{
		cout<<"Here"<<endl;
		cout<<endl<<"Hotel Name:"<<hotel_name<<endl;
		cout<<"Established Year:"<<Established_year<<endl;
		cout<<"Room ID: "<<id<<endl;
		cout<<"Type: "<<type<<endl;
		cout<<"City: "<<location<<endl;
		cout<<"Staff Quantity: "<<staffQuantity<<endl;
		cout<<"Room Qunatity: "<<roomQuantity<<endl;
		cout<<"Rating: "<<rating<<"Star"<<endl;
	}
};
string Hotel::hotel_name="Sarovar Hotels";
int Hotel::Established_year=1994;

int main()
{
	int n,i,a=1;
	cout<<"Enter Values: ";
	cin>> n;
	
	Hotel h[n];
	
	for(i=0;i<n;i++)
	{
		h[i].Setter(a);
		a++;
	}
	a=1;
	for(i=0;i<n;i++)
	{
		cout<<endl<<endl<<"Hotel:"<<a<<endl;
		h[i].Getter(a);
		a++;
	}
}
