/*
Destructors are usually used to deallocate memory and do other cleanup for a class object and its class members when the object is destroyed. A destructor is called for a class object when that object passes out of scope or is explicitly deleted.
*/
#include <iostream>
using namespace std;
class dept_store
{
   static int count;
   int id;
   float price;


public:
dept_store (float p)
      {
          price =p;
          count ++;
          id=count;
          cout<<"Object with ID ="<<id<<"is Created."<<endl;
      }

~ dept_store()                                              //destructor is defined here
{
    cout<<"Object with id ="<<id<<"Destroyed"<<endl;
}
    

};

int dept_store::count=0;

int main()
{
    system("cls");
   dept_store obj1(1.2),  obj2(2.7),  obj3(10.4);
      {
          dept_store obj4(9.99);
      }
}
