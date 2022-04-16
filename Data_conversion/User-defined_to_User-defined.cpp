#include<iostream>
#include<math.h>
using namespace std;
class cartesian
{
    private:
    float xco,yco;
    public:
    //default constructor is initailized here.
    cartesian()
    {
        xco=0.0;
        yco=0.0;
    }
    //parameterized constructor is initialized here by passing float type variable x and y.
    cartesian(float x, float y)
    {
        xco=x;
        yco=y;
    }
    //display function is defined here for showing output of cartesian coordinates.
    void display()
    {
         cout<<"Cartesian coordinates is given as ";
        cout<<xco<<"\t"<<yco<<endl;
    }
};

class polar
{
  private:
  float radius;int angle;
  
  public:
  //Default constructor is initialized here.
  polar()
  {
      radius=0.0;
      angle=0;
  }
  //parameterized constructor is initialized here by passing arguments x of type float and y of type int. 
  polar(float x, int y)
  {
      radius=x;
      angle=y;
  }
  //operator function is defined here for returning the cartesian(x,y) from polar variables.
  operator cartesian()
  {
      float x=(radius*cos(angle));
      float y=(radius*sin(angle));
      return cartesian(x,y);
  }
  //display function is called here for display the output of polar coordinates.
  void display()
  {
      cout<<"Polar coordinates is given as ";
      cout<<radius<<"\t"<<angle<<endl;
  }
};

int main()
{
    system("cls");
    //value were passed as arguments in pol object of polar type class.
    polar pol(10.2,30);
    //cart object is created of class cartesian.
    cartesian cart;
    //cart variable of cartesian type class is initializea with the pol object of polar class.
    cart=pol;
    //object pol calls display function of its own class.
    pol.display();
    //cart object called display function of its own class.
    cart.display();
    return 0;
}