/*  (friend calss)*/
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class  temp
{
    int a,b;
    public:
    void set(int  x,int y)
    {
        a=x;
        b=y;
    }
    friend class minimum;
};
class minimum
{
    public:
    int  min(temp obj)
    {
        if(obj.a<obj.b)
        return obj.a;
        else
        return obj.b;
    }
};
int main()
{
    temp t1;
    minimum m;
    t1.set(4,5);
    cout<<"ans="<<m.min(t1);
    return 0;
}