#include<iostream>
using namespace std;
class animal
{
 public:
 virtual void display()
 {
     cout<<"From base class animal"<<endl;
 }
};

class cow:public animal
{
    public:
    void display()
    {
        cout<<"From derived class cow"<<endl;
    }
};


class dog: public animal
{
    public:
    void display()
    {
        cout<<"From derived class dog \n "<<endl;
    }
};

int main()
{
    system("cls");
    animal *aptr;                    //pointer variable of class animal type is decleared here.
    animal anm;                      //variable of animal type class is created here...
    cow cw;                          //variable of class cow is created here...
    dog dg;                          //variable of class dog is created here...

    aptr=&anm;                       //adress of anm variable of animal class is given to class animal type pointer variable
    aptr->display();                 //pointer variable of class type animal calls fucntion display
    aptr=&cw;                        //adress of cw variable of cow class is given to class animal type pointer variable
    aptr->display();                 //pointer variable of class type cow calls fucntion display
    aptr=&dg;                        //adress of dg variable of cow class is given to class animal type pointer variable
    aptr->display();                 //pointer variable of class type dog calls fucntion display
}