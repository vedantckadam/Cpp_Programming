#include<iostream>
using namespace std;


int main()
{   
  // we can create on refrence to one variable 

  int no=11;
  int &x=no;

  // we can create multiple refrences for single variable
  int &y=no;

  //we can create a refrence to refrence 
  int &z=y;

  //we can create a refrence to pointer 
  int *p=&no;
  int *(&q)=p;
  return 0;
}