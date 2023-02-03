#include<iostream>
using namespace std;
class A
{
public:
    int aid;
    string anm;
    int agetdata()
    {
        cout<<"-------------A--------------";
        cout<<"\nEnter your id:";
        cin>>aid;
        cout<<"Enter your name:";
        cin>>anm;
        return 0;
    }
};
class B
{
public:
    int bid;
    string  bnm;
    int bgetdata()
    {
        cout<<"-------------B--------------";
        cout<<"\nEnter your id:";
        cin>>bid;
        cout<<"Enter your name:";
        cin>>bnm;
        return 0;
    }
};
class C
{
public:
    int cid;
    string  cnm;
    int cgetdata()
    {
        cout<<"-------------C--------------";
        cout<<"\nEnter your id:";
        cin>>cid;
        cout<<"Enter your name:";
        cin>>cnm;
        return 0;
    }
};
class tops : public A, public B, public C
{
public:
    int showdata()
    {
        cout<<"\n-----------------A-------------------";
        cout<<"\nYour id:"<<aid;
        cout<<"\nYour name is:"<<anm;
        cout<<"\n-----------------B------------------";
        cout<<"\nYour id:"<<bid;
        cout<<"\nYour name is:"<<bnm;
        cout<<"\n-----------------C------------------";
        cout<<"\nYour id:"<<cid;
        cout<<"\nYour name is:"<<cnm;
        return 0;
    }
};
int main()
{
    tops t1;
    t1.agetdata();
    t1.bgetdata();
    t1.cgetdata();
    t1.showdata();
    return 0;
}

/*id      name
1       f
2       n
3       a*/