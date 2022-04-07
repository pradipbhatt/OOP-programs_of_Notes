#include <iostream>
using namespace std;
class one                        //class one is defined for display the value of x
{
protected:
    int x;

public:
    void display1()
    {
        cout << x << endl;
    }
};
class two                         //class two is defined for display the value of y
{
protected:
    int y;

public:
    void display2()
    {
        cout << y << endl;
    }
};
class derived : public one, public two   //class derived is defined for enter and display the value of x and y..
{
    int z;

public:
    void enter()
    {
        cout << "Enter any two numbers=\t ";
        cin >> x >> y;
    }
    void display3()
    {
        z = x + y;
        cout << z << endl;
    }
};
int main()
{
    system("cls");
    derived d;
    d.enter();
    d.display1();
    d.display2();
    d.display3();
}
