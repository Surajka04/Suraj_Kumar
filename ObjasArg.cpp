#include<iostream>
#include<conio.h>
using namespace std;
class time
{
    int hours;
    int minutes;
    public:
    void  gettime(int h,int m)
    {
        hours=h;
        minutes=m;
    }
    void puttime()
    {
        cout<<hours<<"hours and";
        cout<<minutes<<"minutes"<<"\n";
    }
    void sum(time,time);
};
void time::sum(time t1, time t2)
{
    minutes=t1.minutes+t2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+t1.hours+t2.hours;
}
int main()
{
    time t1,t2,t3;
    t1.gettime(2,45);
    t2.gettime(3,30);
    t3.sum(t1,t2);
    cout<<"t1=";t1.puttime();
    cout<<"t2=";t2.puttime();
    cout<<"t3=";t3.puttime();
    getch();
    return 0;
}