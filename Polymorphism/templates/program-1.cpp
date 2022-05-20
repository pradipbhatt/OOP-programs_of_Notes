// C++ program to demonstrate the use of class templates

#include <iostream>
using namespace std;

// Class template
template <class T>  //T is the template argument which is a placeholder for the data type used, and class is a keyword.
class Number {
   private:
    //num is Variable of type T
    T num;

   public:
    Number(T n)    // constructor  here n is argument of type T 

    {
        num=n;
    }  
    T getNum() {
        return num;
    }
};

int main() {
    //for clearing the existing output
    system("cls");

    // create object with int type
    Number<int> numberInt(7);                      //className<dataType> classObject(argument);

    // create object with double type
    Number<double> numberDouble(7.7);                //className<dataType> classObject(argument);

 
    cout << "int Number = " << numberInt.getNum() << endl;
    cout << "double Number = " << numberDouble.getNum() << endl;

    return 0;
}