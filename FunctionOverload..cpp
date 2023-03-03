#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class maths 
{
    public:
    int ans;
    void area()
    {
        int r=5;
        ans = 3.14 * r * r;
        cout<< "ans ="<<ans;
    }
    void area(float l, int b = 5);
    void area(int l)
    {
        ans = l * l;
        cout<< "\n ans = "<<ans;
    }
};

void maths::area( float l, int b)
{
    int ans = l*b;
    cout<<"ans="<<ans;
}
int main()
{
    int n3=5;
    float n2=7.2;
    maths m1;
    m1.area();
    m1.area(n2,n3);
    m1.area(5);
    getch();
    return 0;
}