#include<iostream>
using namespace std;
template <typename T>
class Template_class
{
public:
    Template_class(T a)
    {
        cout<<"\nThe value of a is:"<<a<<endl;
    }
    T div(T a, T b)
    {
        cout<<endl;
        return a / b;
    }
};
int main()
{
    Template_class <int> t1(10);
    cout<<t1.div(12, 2);
    Template_class <float> t2(10.10);
    cout<<t2.div(12, 5);
    return 0;
}