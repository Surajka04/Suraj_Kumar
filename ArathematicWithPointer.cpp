#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
    int a,b,*p1,*p2,x,y,z;
    a=12;
    b=4;
    p1=&a;
    p2=&b;
    x=*p1 * *p2-6;
    cout<<"address of a= "<<p1;
    cout<<endl<<"address of b= "<<p2;

    cout<<"a="<<a<<"b="<<b;
    cout<<endl<<"x="<<x;
    *p2=*p2 + 3;
    *p1=*p2 - 5;
    z=*p1 * *p2 - 6;
    cout<<endl<<"a= "<<a<<"b="<<b;
    cout<<"z="<<z;
    return 0;
}