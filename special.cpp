#include<iostream>
using namespace std;

class demo
{
    public:
        int i;          //characteristics 
        float j;        //characteristics 
    
    demo()      //constructor
    {
        cout<<"inside constructor"<<"\n";
        i=0;
        j=0.0f;
    }

    ~demo()     //destructor
    {
        cout<<"inside destructor"<<"\n";

    }

    void fun()          //Behavior 
    {
        cout<<"Insude Fun\n";
    }
};

int main()                          
{
    cout<<"Inside Main"<<"\n";
w
    demo dobj;          //object creation 

    cout<<dobj.i<<"\n";

    //cout<<"\n"<<dobj.j<<"\n";

    dobj.fun();

    cout<<"End of main"<<"\n";
    return 0;
}