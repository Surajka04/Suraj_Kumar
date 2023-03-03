#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class space
{
    int x;
    int y;
    int z;
    public:
    void getdata(int a, int b, int c);
    void display();
    friend void operator -(space &s);
};
void space::getdata(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
}
void space::display()
{
    cout<<x<<"  ";
    cout<<y<<"  ";
    cout<<z<<"\n";
}
void operator -(space &s)
{
    s.x= -s.x;
    s.y= -s.y;
    s.z= -s.z;
}
int main()
{
    space s;
    s.getdata(10,-20,30);
    cout<<"s:";
    s.display();
    -s;
    cout<<"s:";
    s.display();
    return 0;
}