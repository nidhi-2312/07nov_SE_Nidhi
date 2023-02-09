#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str;
    ofstream out("D:/nidhi batch/software engineering/07nov_Se/module-3/hello.txt");
    out<<"Hello";
    out.close();
    ifstream in;
    in.open("D:/nidhi batch/software engineering/07nov_Se/module-3/hello.txt");
    in>>str;
    cout<<str;
    in.close();
    return 0;
}