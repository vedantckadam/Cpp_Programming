//error due to ptivate access specifier 

#include<iostream>
using namespace std;

// in cpp the access specifier is by default private

//encapsulation

class marvellous
{
    //access specifier  
    int no1,no2; //characteristics

    
    void fun()//behaviour
    {
        cout<<"inside fun"<<"\n";
    }
    
    void gun()      //behaviour
    {
    cout<<"inside gun\n"; 
    }
};

int main()
{
    marvellous mobj1;
    marvellous mobj2;
    cout<<sizeof(mobj1)<<"\n";      //8

    cout<<mobj1.no1<<"\n";      //error

    mobj1.fun();//error
    mobj2.fun();//error
    mobj1.gun();//error
    mobj2.gun();//error

    return 0;
}