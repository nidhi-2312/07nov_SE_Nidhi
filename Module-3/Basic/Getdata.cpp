#include<iostream>
using namespace std;
int id;
string nm;

int getdata()
{
    cout<<"Enter your id:";
    cin>>id;
    cout<<"Enter your name:";
    cin>>nm;
    return 0;
}
int printdata()
{
    cout<<"Your id is:"<<id<<endl<<"your name is:"<<nm;
    return 0;
}
int main()
{
    getdata();
    printdata();
    return 0;
};