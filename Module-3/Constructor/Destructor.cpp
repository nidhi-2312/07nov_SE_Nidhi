#include<iostream>
using namespace std;
class Destruct
{
public:
    Destruct()
    {
        cout<<"This is constructor.";
    }
    ~Destruct()
    {
        cout<<"\nthis is destructor.";
    }
};
int main()
{
    Destruct des;
} 