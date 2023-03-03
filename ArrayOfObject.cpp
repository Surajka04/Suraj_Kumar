#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class student
{
    private:
    int rollno;
    char name[20];
    int sub1,sub2,sub3,total;
    public:
    void getdata()
    {
        cout<<"\n enter rollno = ";
        cin>>rollno;
        cout<<"\n enter the name = ";
        cin>>name;
        cout<<"\n enter three subject marks = ";
        cin>>sub1>>sub2>>sub3;
    }
    void display()
    {
        cout<<"\n rollno="<<rollno;
        cout<<"\n name="<<name;
        cout<<"sub1="<<sub1<<"sub2="<<sub2<<"sub3="<<sub3;
        total=sub1+sub2+sub3;
        cout<<"total="<<total;
    }
};
int main()
{
    student s1[3];
    for(int i=0;i<=2;i++)
    s1[i].getdata();
    for(int j=0;j<=2;j++)
    s1[j].display();
    return 0;
}
