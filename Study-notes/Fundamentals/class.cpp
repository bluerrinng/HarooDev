#include <iostream>

using namespace std;

class Parent 
{
public:
    int a = 10;
    int b = 20;
    int c = 30;
};

class Child : public Parent
{
public:
    int d  = 40;
    int e =  50;
};

int main()
{
    Parent* p = new Child();

    cout << p->a << endl;

    return 0 ;
}