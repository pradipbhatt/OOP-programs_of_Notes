#include <iostream>
using namespace std;

float volume(float);               // function decleration
float volume(int, float);          // function decleration
float volume(float, float, float); // function decleration

int main()
{
    int l, b, h, s; // vaariable decleration of integer type
    system("cls");
    int r;
    cout << "Enter the values of l , b, h ,s";
    cin >> l >> b >> h >> s >> r;                                     // Entering the value of l b h s r b y user..
    cout << "Volume of cyliender=" << volume(r, h) << endl;           // volume(r,h) is called here..
    cout << "Volume of cube=" << volume(s) << endl;                   // volume(s) is called here..
    cout << "Volume of rectangular box =" << volume(l, b, h) << endl; // volume(l,b,h) is called here.
}

float volume(int r, float h)
{
    float v = 3.145 * r * r * h; // float type variable v is defined here
    return (v);
}

float volume(float s)
{
    float v = s * s * s; // float type variable v is defined here
    return (s);
}
float volume(float l, float b, float h)
{
    float v = l * b * h; // float type variable v is defined here
    return (v);
}
