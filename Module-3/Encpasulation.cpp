// Wrraping up the data
#include<iostream>
using namespace std;
class Capsual
{
    int id;
    string nm;
public:
    Capsual(int i, string n)
    {
        id = i;
        nm = n;
        cout<<"Your id is:"<<id<<endl<<"Your name is:"<<nm;
    }

};
int main()
{
    Capsual cap(101,"Heli");
}   