#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class simple
{
    int a;
    public:
    void set_data(int x)
    {
        this->a=x;
    }
    void display()
    {
        cout<<"a= "<<this->a<<endl;
        cout<<"address of object e= "<<this<<endl;
    }
};
int main()
{
    simple e;
    e.set_data(5);
    e.display();
    getch();
    return 0;
}