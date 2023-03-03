#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class complex
{
    float x;
    float y;
    public:
    void input(float real,float imag)
    {
        x=real;
        y=imag;
    }
    friend complex sum(complex,complex);
    void show(complex);
};
complex sum(complex c1,complex c2)
{
    complex c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    return(c3);
}
void complex::show(complex c)
{
    cout<<c.x<<"+"<<c.y<<"\n";
}
int main()
{
    complex a,b,c;
    a.input(3.1,5.65);
    b.input(2.75,1.2);
    c=sum(a,b);
    cout<<"a=";
    a.show(a);
    cout<<"b=";
    b.show(b);
    cout<<"c=";
    c.show(c);
    return 0;
}