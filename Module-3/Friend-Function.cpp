#include<iostream>
using namespace std;
class Friend
{
private:
    int no;
public:
    friend int getdata(Friend &fr);
};
int getdata(Friend &fr)
{
    cout<<"Enter the value of no:";
    cin>>fr.no;
    cout<<"\nValue of no is:"<<fr.no<<endl;
    return ++fr.no;
}
int main()
{
    Friend frend;
    cout<<endl<<getdata(frend);
    return 0;
}