/*Use to hide the background detail*/
#include<iostream>
using namespace std;
class Abstract
{
    int no;
public:
    Abstract(int n)
    {
        n++;
        no = n;
    }
    void show()
    {
        cout<<"Value of no is:"<<no;
    }
};
int main()
{
    Abstract ab(10);
    ab.show(); 
}