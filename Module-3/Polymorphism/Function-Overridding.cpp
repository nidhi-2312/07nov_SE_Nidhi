#include<iostream>
using namespace std;
class Poly1
{
public:
    int sub(int a, int b)
    {
        cout<<"\nSubstractionof class poly1 is:"<<a - b;
        return 0;
    }
};
class Poly2
{
public:
    int sub(int a, int b)
    {
        cout<<"\nSubstractionof class poly2 is:"<<a - b;
        return 0;
    }
};
int main()
{
    Poly1 p1;
    Poly2 p2;
    p1.sub(12,23);
    p2.sub(45,56);
}