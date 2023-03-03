/*friend member function*/
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class simple;
class dimple
{
    public:
    void set_data(simple &,int);
};
class simple
{
    private:
    int x;
    public:
    int get_data();
    friend void dimple::set_data(simple &,int);
};
void dimple::set_data(simple &a,int b)
{
    a.x=b;
}
int simple::get_data()
{
    return x;
}
int main()
{
    simple e;
    dimple f;
    f.set_data(e,5);
    cout<<e.get_data()<<endl;
    return 0;
}