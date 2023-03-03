#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class code
{
    int id;
    public:
    code()
    {}
    code(int a)
    {
        id=a;
    }
    code(code &x)
    {
        id=x.id;
    }
    void display (void)
    {
        cout<<id;
    }
};
int main()
{
    code A(100);
    code B(A);
    code C=A;
    code D;
    D=A;
    cout<<"\n id of a ";A.display();
    cout<<"\n id of b ";B.display();
    cout<<"\n id of c ";C.display();
    cout<<"\n id of d ";D.display();
    return 0;
}