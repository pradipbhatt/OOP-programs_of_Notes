#include<iostream>
using namespace std;
class display;
class input
{
    int x;
    public:
    void input()
    {
        cout<<"Enter the value of x"<<x<<endl;
    }
    friend void display();
};
class display
{
    int y;
    public:
    
};