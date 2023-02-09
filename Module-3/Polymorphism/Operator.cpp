#include<iostream>
using namespace std;
class Operator
{
public: 
    int no;
    Operator()
    {
        cout<<"Enter the value of no:";
        cin>>no;
    }
    Operator operator ++()
    {
        no++;
    }
    void show()
    {
        cout<<"Value of no is:"<<no<<endl;
    }
};
int main()
{
    Operator obj;
    ++obj;
    obj.show();
}