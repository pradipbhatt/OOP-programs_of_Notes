#include<iostream>
using namespace std;
class distance
{
    float km,m;
    public:
    distance()
    {
        km=0;
        m=0;
    }
    distance (float a, float b)
    {
        km=a;
        m=b;
    }
    distance &compare(distance d)
                 {
                     if ((km*1000+m)>(d.km*1000+d.m))
                     {
                       return *this;
                     }
                     if ((this->km*1000+m)>(d.km*1000+d.m))
                     {
                       return *d;
                     }
                     
                 } 

};

int main()
{
    system("cls");
distance d1(5.0 , 2.0),
d2(1.3 ,1.6),d3;
cout<<"Larger distance";
d3=d1.compare(d2);
d3.display();
}
