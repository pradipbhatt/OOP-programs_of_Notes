//first program of OOP Polymorphism
#include<iostream>
using namespace std;
class base
{
    public:
    int m;
    void display()
    {
        cout<<"\n From base class M="<<m;
    }
};
class derived:public base
{
    public:
    int n;
    void display()
    {
        cout<<endl<<"Derived class n="<<n;
    }
};
int main()
{
    system("cls");
    base *bptr;
    derived *dptr;
    derived d1;
    bptr=&d1;
    dptr=&d1;
    bptr->m=10;
    bptr->display();
    dptr->n=20;
    dptr->display();
    dptr->base::display();
    return 0;
}