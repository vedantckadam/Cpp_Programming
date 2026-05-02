#include<iostream>
using namespace std;


int main()
{   
    int no=10;
    int &x=no;

    cout<<"Value of no:"<<no<<"\n";//10
    cout<<"Value of x:"<<x<<"\n";//10

    cout<<"Address  of no:"<<&x<<"\n";//100
    cout<<"Address of x:"<<&x<<"\n";//100

    //cout<<"Size of no:"<<Sizeof(no)<<"\n";//4
    //cout<<"Size of x:"<<Sizeof(x)<<"\n";//4
    return 0;
}