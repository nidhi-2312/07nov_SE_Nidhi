#include<iostream>
using namespace std;
class Construct
{
public: 
    int no;
    Construct()
    {
        cout<<"Enter the value of no:";
        cin>>no; 
    }
    void showdata()
    {
        cout<<"Value of no is:"<<no;
    }
};
int main()
{
    Construct con;
    con.showdata();
    return 0;
}