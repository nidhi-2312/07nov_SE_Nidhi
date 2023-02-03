#include<iostream>
using namespace std;
class Base
{
public:
	int datab()
	{
		cout<<"This is base class.\n";	
		return 0;
	}	
};
class Derived : public Base
{
public:
		int datad()
		{
			cout<<"This is child class.";
			return 0;
		}
};
int main()
{	
	Derived d1;
	d1.datab();
	d1.datad();		
	return 0;
}
