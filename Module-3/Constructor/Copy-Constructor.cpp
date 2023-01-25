#include<iostream>
using namespace std;
class Constructor
{
public:
    string nm;
    Constructor(string n)
    {
        nm = n;
    }
    Constructor(Constructor &con)
    {
        nm = con.nm;
    }
    void print()
    {
        cout<<"Your name is:"<<nm<<endl;
    }
};
int main()
{
    Constructor con1("hello");
    Constructor con2 = con1;
    con1.print();
    con2.print();
}