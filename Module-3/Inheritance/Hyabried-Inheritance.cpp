#include<iostream>
using namespace std;
class A
{
public:
    int a()
    {
        cout<<"This is class A"<<endl;
        return 0;
    }
};
class B : virtual public A
{
public:
    int b()
    {
        cout<<"This is class B."<<endl;
        return 0;
    }
};
class C : virtual public A
{
    public:
        int c()
        {
            cout<<"This is class c."<<endl;
            return 0;
        }
};
class D : public B, public C
{
public:
    int d()
    {
        cout<<"this is class D.";   
        return 0;
    }
};
int main()
{
    D d1;
    d1.a();
    d1.b();
    d1.c();
    d1.d();
}