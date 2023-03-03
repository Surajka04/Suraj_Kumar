#include<iostream>
#include<conio.h>
using namespace std;
class enclose
{
    private:
    int a;
    double b;
    public:
    void set_enclose();
    void get_enclose();
    class inner
    {
        private:
        int c;
        double d;
        public:
        void set_inner()
        {
            c=5;
            d=2.5;
        }
        void get_inner()
        {
            cout<<c<<"\n";
            cout<<d<<"\n";
        }
    };
};
void enclose::set_enclose()
{
    a=9;
    b=10.12;
}
void enclose::get_enclose()
{
    cout<<a<<"\n";
    cout<<b<<"\n";
}
int main()
{
    enclose e;
    e.set_enclose();
    e.get_enclose();
    enclose::inner i;
    i.set_inner();
    i.get_inner();
    getch();
    return 0;
}