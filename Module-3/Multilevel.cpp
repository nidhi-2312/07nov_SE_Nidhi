#include<iostream>
using namespace std;
class Grand
{
public:
	int house;
	int gdata()
	{
		cout<<"Enter the no of house:";
		cin>>house;
		return 0;
	}
};
class Perent : public Grand
{
public:
	int bal;
	int pdata()
	{
		cout<<"Entrer the total bank balance:";
		cin>>bal;
	}
};
class Child : public Perent{
public:
	int car;
	int cdata()
	{
		cout<<"Enter the no of car:";
		cin>>car;
	}
	int print()
	{
		cout<<"No of house is:"<<house<<endl;
		cout<<"Total bank balance is:"<<bal<<endl;
		cout<<"Total no of car is:"<<car;
	}
};
int main()
{
	Child c1;
	c1.gdata();
	c1.pdata();
	c1.cdata();
	c1.print();
}
