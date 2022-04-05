#include <iostream>
#include<math.h>
using namespace std;
class polar
{
private:
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
    int return_rad()
    {
        return radius;
    }
    int return_ang()
    {
        return angle;
    }
    void disply()
    {
        cout <<"\n"<< radius <<"\n"<< angle;
    }
};
class cartesian
{
    private:
    float xco, yco;
    public:
    cartesian()
    {
        xco=0.0,yco=0.0;
    }
    cartesian(float x, float y)
    {
        xco=x;
        yco=y;
    }
    cartesian(polar p)
    {
        xco=p.return_rad()*cos(p.return_ang());
        yco=p.return_rad()*sin(p.return_ang());
    }
    void display()
    {
        cout<<"\n"<<xco<<"\n"<<yco;
    }
};

int main()
{
    system("Cls");
    polar pol(12.1,45);
    cartesian cart;
    cart=pol;
    pol.disply();
    cart.display();
}