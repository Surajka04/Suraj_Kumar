#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class A
{
    int a;
    public:
    int get();
    A()
    {
        a=5;
    }
};
int A::get()
{
    return a;
}
int main()
{
    A a1;
    cout<<a1.get()<<endl;
    return 0;
}