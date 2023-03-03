#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
    int x,y;
    int *ptr;
    x=10;
    ptr=&x;
    y=*ptr;
    cout<<"values of x is "<<x;
    cout<<endl<<" x is stored at addr "<<&x;
    cout<<endl<<" *&x is stored at addr "<<&x;
    cout<<endl<<" *ptr is stored at addr "<<ptr;
    cout<<endl<<" ptr is stored at addr "<<&ptr;
    cout<<endl<<" y is stored at addr "<<&y;
    *ptr=25;
    cout<<endl<<" now x= "<<x;
    return 0;
}