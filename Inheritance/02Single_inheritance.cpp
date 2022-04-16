#include<iostream>
using namespace std;
//.....................................Class B stars from here.............
class B
{
    int a; //private; not inhereitable.

public:
    int b;
    void set_ab();        //set_ab function is decleared here...
    int get_a(void);      //get_ab function is decleared here
    void show_a(void);
};
//...................................Class B ends here and class D starts......................
class D : public B //public derivation
{
    int c;
public:
    void mul(void);       //mul function is decleared here...
    void display();       //display function is decleared here...
};
//...................................Class D ends here..................................
void B:: set_ab(void)
{
    a=5;
    b=10;
}
//get_a function of class B is defined here..
int B::get_a()
{
    return a;
}
//show_a function of class B is defined here...
void B::show_a()
{
    cout<<"a= "<<a<<"\n";
}
// mul function of class D is defined here...
void D::mul()
{
    c=b*get_a();
}
// display function of class D id defiened here...
void D::display()
{
    cout<<"a="<<get_a()<<"\n";
    cout<<"b="<<b<<"\n";
    cout<<"c="<<c<<"\n\n";
}
//....................................main function starts...........
int main()
{
    system("cls");
    D d;
    d.set_ab();
    d.mul();
    d.show_a();
    d.display();

    d.b=20;
    d.mul();
    d.display();
}