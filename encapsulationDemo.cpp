#include<iostream>
using namespace std;

// in cpp the access specifier is by default private

//encapsulation

class marvellous
{
    //access specifier  
    public:
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

    cout<<mobj1.no1<<"\n";

    mobj1.fun();
    mobj2.fun();
    mobj1.gun();
    mobj2.gun();

    return 0;
}