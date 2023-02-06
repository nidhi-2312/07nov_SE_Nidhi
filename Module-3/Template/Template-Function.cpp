#include<iostream>
using namespace std;
template <class T>
T div(T a, T b)
{
    return a / b;
}
int main()
{
    cout<<"\nDivistion of int is:"<<div<int>(5, 2);
    cout<<"\nDivistion of float is:"<<div<float>(5, 2);

}