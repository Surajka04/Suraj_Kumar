/* with argument and value*/
#include<iostream>
#include<conio.h>
using namespace std;
int sum(int a,int b)
{
    int ans;
    ans=a+b;
    return ans;
}
int main ()
{
    int a=5,b=10,total;
    total=sum(a,b);
    cout<<"ans="<<total;
    getch();
    return 0;

}