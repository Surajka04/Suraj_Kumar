#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class integer
{
    int m,n;
    public:
    integer()
    {}
    integer(int,int);
    void display(void)
    {
        cout<<" m= "<<m<<"\n";
        cout<<" n= "<<n<<"\n";
    }
};
integer :: integer (int x, int y)
{
    m=x;
    n=y;
}
int main ()
{
    integer int1 (0,100);
    integer int2 = integer(25,75);
    integer int3;
    cout<<" \n object 1 "<<" \n ";
    int1.display();
    cout<<" \n object 2 "<<" \n ";
    int2.display();
    return 0;
}