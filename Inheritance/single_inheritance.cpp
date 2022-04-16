//single inheritance program of c++
#include<iostream>
using namespace std;
class A
{
private:
 int x,y;
//  void show()
//  {
//      cout<<x<<y<<endl;
//  }
 //public section starts from here.
 public:
 int z;
 void sum()
 {
     z=x+y;
     cout<<z;
 }
};

class B:public A
{
 int a,b;
 public:
 //enter function is defined here.
 void enter()
 {
     cin>>a>>b;
 }
 //display finction is defined here.
 void display()
 {
     cout<<a<<b;
 }
};
//main functions starts from here.
int main()
{
    system("cls");
    //m is object of class A
    A m;
    //n is obj of class B
    B n;
    n.z=10;
    n.sum();
    //n.x=5; this also not inherit because x is data of private section 
    //n.show();   show private function ho so inherit hudaena..
    return 0;
}