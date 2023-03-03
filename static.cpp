#include<iostream>
using namespace std;
#include<conio.h>
#include<stdio.h>
class test
{
    int code;
    static int count;
    public:
    void setcode()
    {
        code=++count;

    }
    void showcode()
    {
        cout<<"object number"<<code<<"\n";
    }
    static void showcount()
    {
        cout<<"cout"<<count<<"\n";
    }
};
int test ::count;
int main()
{
    test t1,t2;
    t1.setcode();
    t2.setcode();
    test ::showcount();
    test t3;
    t3.setcode();
    test ::showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();
    getch();
    return 0;
}