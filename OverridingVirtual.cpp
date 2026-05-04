#include<iostream>
using namespace std;

class Base 
{
    public :
    int i , j=0;

    void fun()
    {  cout<<"Enter Base Fun\n"; }

    virtual void gun()
    {  cout<<"Enter Base Gun\n"; }

    virtual void sun()
    {  cout<<"Enter Base Sun\n"; }

};

class Derived : public Base 
{
    public:
    int x , y =0;
    
    void fun()          //Redefination
    { cout<<"Inside Derived Fun \n";}

    void sun()          //Redefination
    { cout<<"Inside Derived Sun\n";}

    virtual void run()             //defination
    { cout<<"Inside Derived Run\n";}

};
int main()
{   
    Base *bp =new Derived(); //upcasting
    bp->fun();      //Base
    bp->gun();      //Base
    bp->sun();      //Derived
    //bp->run();      //Error

    return 0;
}