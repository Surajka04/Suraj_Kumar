#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
    char a;
    int x;
    float p,q;
    a='A';
    x=125;
    p=10.25,q=18.76;
    cout<<a<<" is stored at addr "<<&a;
    cout<<"\n"<<x<<" is stored at addr "<<&x;
    cout<<"\n"<<p<<" is stored at addr "<<&p;
    cout<<"\n"<<q<<" is stored at addr "<<&q;
    getch();
    return 0;
}