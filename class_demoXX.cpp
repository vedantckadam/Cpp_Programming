#include<iostream>
using namespace std;

class demo
{
    public:
        int i;          //characteristics 
        float j;        //characteristics 

    void fun()          //Behavior 
    {
        cout<<"Insude Fun\n";
    }
};

int main()                          
{
    demo dobj;
    cout<<dobj.i<<"\n";
    dobj.fun();
    return 0;
}