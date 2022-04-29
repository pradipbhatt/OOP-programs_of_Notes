#include <iostream>
using namespace std;
class complex
{
    float x, y;

public:
    complex() : x(0.0), y(0.0) {}             // default condtructor is defined
    complex(float a, float b) : x(a), y(b) {} // parameterized constructor is defiend...

    complex operator+(complex); // operator overloading function is decleared here..
    void display();
};

complex complex::operator+(complex c) // operator overloading function is defined here..
{
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return (temp);
}

void complex::display()
{
    cout << x << "+j" << y << endl;
}
int main()
{
    system("cls");
    complex c1(3.5, 4.5), c2(1.6, 2.7), c3;
    c3 = c1 + c2;
    cout << "c1=";
    c1.display();
    cout << "c2=";
    c2.display();
    cout << "c3=";
    c3.display();
}