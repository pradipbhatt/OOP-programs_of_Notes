/*1. What is a Constructor?
A constructor is a member function of a class which initializes objects of a class. In C++, Constructor is automatically called when object(instance of class) is created. It is special member function of the class.



2. How constructors are different from a normal member function?
A constructor is different from normal functions in following ways:
->Constructor has same name as the class itself
->Constructors don’t have return type
->A constructor is automatically called when an object is created.
->If we do not specify a constructor, C++ compiler generates a default constructor for us (expects no parameters and has an empty body).



Types of Constructors?
Default Constructors: Default constructor is the constructor which doesn’t take any argument. It has no parameters.
Parameterized Constructors: It is possible to pass arguments to constructors. Typically, these arguments help initialize an object when it is created. To create a parameterized constructor, simply add parameters to it the way you would to any other function. When you define the constructor’s body, use the parameters to initialize the object.
Copy Constructor: A copy constructor is a member function which initializes an object using another object of the same class.



What is Destructor?
Destructor is a member function which destructs or deletes an object.
When is destructor called?
The function ends.
The program ends.
A block containing local variables ends.
A delete operator is called.
How destructors are different from a normal member function?
Destructors have same name as the class preceded by a tilde (~).
Destructors don’t take any argument and don’t return anything(not even void).



Can there be more than one destructor in a class?
No, there can only one destructor in a class with classname preceded by ~, no parameters and no return type.
When do we need to write a user-defined destructor?
If we do not write our own destructor in class, compiler creates a default destructor for us. The default destructor works fine unless we have dynamically allocated memory or pointer in class. When a class contains a pointer to memory allocated in class, we should write a destructor to release memory before the class instance is destroyed. This must be done to avoid memory leak.
*/
#include<iostream>
using namespace std;
class constructor
{
    int a,b;
    public:
    constructor();                                       //default constructor is decleared here
    constructor(int , int);                              //parameterized constructor is dedcleared here..
    int display()
    {
        cout<<"The value of output a ="<<a<<endl;
        cout<<"The value of b ="<<b<<endl;
    }
};
 constructor ::constructor()                                //deafult constructor is defined here
{
    cout<<"This is default constructor\n ";
    a=0;
    b=0;
}
constructor ::constructor(int x, int y)                        //parameterized constrctor is defined here..
{
    a=x;
    b=y;
}
int main()
{
    system("cls");
    constructor c1,c2;
    constructor c3(5,10),c4(15,20);
    c1.display();
    c2.display();
    c3.display();
    c4.display();

}
