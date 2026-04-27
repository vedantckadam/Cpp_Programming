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
    cout<<sizeof(dobj)<<"\n";       //8 bytes of memory 
    return 0;
}