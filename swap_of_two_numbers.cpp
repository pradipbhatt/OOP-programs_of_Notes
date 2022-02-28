#include <iostream>
using namespace std;

int swap(int &x, int &y) // function swap is defined here by passing adress of x and y..
{
    int t; // variable t is created of integer type..
    t = x;
    x = y;
    y = t;
}

int main()
{
    int a, b;
    system("cls");
    cout << "Enter any two numbers" << endl;
    cin >> a >> b;
    swap(a, b); // Function swap is called here and a and b are passed in this function..
    cout << "The numbers after swap is:" << a << "\t and   " << b << endl;
}
