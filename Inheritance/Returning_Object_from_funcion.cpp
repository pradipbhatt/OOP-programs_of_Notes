#include<iostream>
using namespace std;
class coordinate
{
    int x,y;
    public:
    void input()
    {
        cout<<"Enter the value of x and y \n";
        cin>>x>>y;
    }
    void show()
    {
        cout<<x<<"\n"<<y<<endl;
    }

    friend coordinate sum(coordinate , coordinate);
};

coordinate sum(coordinate a, coordinate b)
{
    coordinate z;
    z.x=a.x+b.x;
    z.y=a.y+b.y;
    return z;
}

int main()
{
    system("cls");
    coordinate i,j,k;
    i.input();
    j.input();
    k=sum(i,j);
    i.show();
    j.show();
    k.show();
}