#include <iostream>
#include <math.h>
using namespace std;
class polar
{
    float radius;
    int angle;

public:
    polar()
    {
        radius = 0.0;
        angle = 0;
    }

    polar(float rad, int ang)
    {
        radius = rad;
        angle = ang;
    }
    float return_rad()
    {
        return radius;
    }
    int return_ang()
    {
        return angle;
    }
    void display()
    {
        cout << angle << endl
             << radius << endl;
    }
};
class cartesian
{

    float xco, yco;

public:
    cartesian()
    {
        xco = 0.0;
        yco = 0.0;
    }
    cartesian(float x, float y)
    {
        xco = x;
        yco = y;
    }
    cartesian(polar p)
    {
        xco = p.return_rad() * cos(p.return_ang());
        yco = p.return_rad() * sin(p.return_ang());
    }
    void display()
    {
        cout << xco << endl
             << yco;
    }
};
int main()
{
    system("cls");
    polar pol(4.3, 50);
    cartesian cart;
    cart = pol;
    pol.display();
    cart.display();
    return 0;
}