#include<iostream>
using namespace std;

class demo
{
    public:
        int i=0;          //non-static
        int j=0;          //non-static
        static int k;   //static

    demo()
    {
        i=0;
        j=0;
    }
};

demo int :: k=11;

int main()
{
    demo dobj;
    cout<<demo::k<<"\n";
    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
    
    return 0;
}