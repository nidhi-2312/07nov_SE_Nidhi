#include<iostream>
using namespace std;
class Stdata
{
    private:
    //data member
    int id;
    string nm;
public:
    //member function
    int getdata()
    {   
        cout<<"Enter student's id";
        cin>>id;
        cout<<"Enter studet's name:";
        cin>>nm;
        return 0;
    }
    int showdata()
    {
        cout<<"\nStudent's id is:"<<id;
        cout<<endl<<"Student's name is:"<<nm;
        return 0;
    }
};
int main()
{
    Stdata st;
    st.getdata();
    st.showdata(); 
}