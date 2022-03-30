/*
You can access an object either directly, or by using a pointer to the object. To access an element of an object when using the actual object itself, use the dot operator. To access a specific element of an object when using a pointer to the object, you must use the arrow operator
*/
#include <iostream>
using namespace std;
class BEE
{
    int roll, marks;

public:
    int getdata()
    {
        cout << "Enter roll and marks";
        cin >> roll >> marks;
    }
    int showdata()
    {
        cout << "Entered roll  is =" << roll <<" \t and marks is \t "<< marks << endl;
    }
};
int main()
{
    system("cls");
    BEE *ptr, obj1;
    ptr = &obj1;
    ptr->getdata(); //(*ptr).getdata
    ptr->showdata();
}
