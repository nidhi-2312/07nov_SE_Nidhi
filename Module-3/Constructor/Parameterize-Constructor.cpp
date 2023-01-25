#include<iostream>
using namespace std;
class Parameter
{
public:
    Parameter(int no)
    {
        cout<<"Value of no is:"<<no;
    }
};
int main()
{
    int no;
    cout<<"Enter the value of no:";
    cin>>no;
    Parameter par(no);
}