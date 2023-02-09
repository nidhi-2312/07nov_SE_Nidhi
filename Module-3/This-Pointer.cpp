#include<iostream>
using namespace std;
class This
{
public:
    int no;
    This(int n)
    {
        no = n;
    }
    void data()
    {
        int no = 10;
        cout<<"Value of local variable no is:"<<no;      
        cout<<endl<<"Value of data member is:"<<this->no;
    }
};
int main()
{
    This t1(100);
    t1.data();
    return 0;
}