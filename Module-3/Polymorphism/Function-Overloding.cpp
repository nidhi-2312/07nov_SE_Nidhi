#include<iostream>
using namespace std;
class Poly
{
public:
    int add(int a, int b)
    {
        cout<<"Addition of two value is:"<<a + b;
        return 0;
    }
    int add(int a, int b, int c)
    {
        cout<<"\nAddition of three value is:"<< a+b+c;
        return 0;
    }
};
int main()
{
    Poly p1;
    p1.add(10, 20);
    p1.add(10,20,30);
}