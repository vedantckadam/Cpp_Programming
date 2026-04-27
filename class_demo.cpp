#include<iostream>
using namespace std;

class demo
{
    public:
        int i;
        float j;
};

int main()
{
    demo dobj;
    cout<<sizeof(dobj)<<"\n";       //8 bytes of memory
    return 0;
}