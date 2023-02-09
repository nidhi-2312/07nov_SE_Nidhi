#include<iostream>
using namespace std;
class Base
{
public: 
    virtual int data()
    {
        cout<<"This function in base class."<<endl;
    }
};
class Derived : public Base
{
public:
    int data()
    {
        cout<<"This function in derived class.";
    }
};
int main()
{
    Base b2;
    b2.data();
    Base *b1;
    Derived d1;
    b1 = &d1;
    b1->data();

}