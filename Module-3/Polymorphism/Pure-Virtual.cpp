#include<iostream>
using namespace std;
class Virtual
{
public:
    // int no;
    virtual int data() = 0;
};
class Virtual_derived
{
public:
    int data()
    {
        cout<<"This function in derived class.";
        return 0;
    }
};
int main()
{
    // Virtual v1;
    Virtual_derived vd;
    // v1 = &vd;
    vd.data();
    return 0;
}