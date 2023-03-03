#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class sample
{
    private:
    int a,b;
    public:
    friend sample operator +(sample &, sample &);
    void display()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
    sample(int x, int y)
    {
        a=x;
        b=y;
    }
    sample() {}
};
sample operator +(sample &s1, sample &s2)
{
    sample s;
    s.a=s1.a+s2.a;
    s.b=s1.b+s2.b;
    return s;
}
int main()
{
    sample s1(3,4);
    sample s2(5,6);
    sample s3;
    s3=s1+s2;
    s3.display();
    return 0;
}