#include <cstring>
#include <iostream>
using namespace std;

class MyString
{
    char *name;
    int length;

public:
    MyString()
    {
        length = 0;
        name = nullptr;
    }

    MyString(const char *s)
    {
        length = strlen(s);
        name = new char[length + 1];
        strcpy(name, s);
    }

    void display()
    {
        cout << name << "\n";
    }

    void join(MyString &a, MyString &b)
    {
        length = a.length + b.length;
        delete [] name;
        name = new char[length + 1];
        strcpy(name, a.name);
        strcat(name, b.name);
    }

    ~MyString()
    {
        delete [] name;
    }
};

int main()
{
    const char *first = "joseph";
    MyString name1(first), name2("louis"), name3("lagrange"), s1, s2;
    s1.join(name1, name2);
    s2.join(s1, name3);
    name1.display();
    name2.display();
    name3.display();
    s1.display();
    s2.display();
    return 0;
}
