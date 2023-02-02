#include<iostream>
using namespace std;
class Friend
{
    int no;
public:
    friend class demo;
};
class demo
{
public:
    int getdata(Friend &obj){
        cout<<"Enter the value of no:";
        cin>>obj.no;
        cout<<"Value of no is:"<<obj.no<<endl;
        return ++obj.no;
    }
};
int main()
{
    Friend frend;
    demo d;
    cout<<d.getdata(frend);
    return 0;   
}