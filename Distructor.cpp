#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int count = 0;
class alpha
{
    public:
    alpha()
    {
        count ++;
        cout<<"\n no. of objected created "<<count;
    }

    ~alpha()
    {
        cout<<"\n no. of objected destroyed "<<count;
        count --;
    }
};
int main()
{
    cout<<"\n enter main() \n";
    alpha a1,a2,a3,a4;
    {
        cout<<"\n enter block1 \n";
        alpha a5;
    }

    {
        cout<<"\n re-enter main() \n";
        return 0;
    }
}