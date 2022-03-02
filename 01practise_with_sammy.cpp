#include<iostream>
#include <iomanip>
using namespace std;

class student
{
    private:
    int hari;

    public:

    void input()            //input function is defined...
    {
        int roll;
        cout<<"Enter the roll of student";
        cin>>roll;
    }

    void display()                    //display function is defined....
    {
        int roll;
        cout<<"The roll you entered is"<<roll<<endl;
    }

};

int main()
{
    system("cls");
    student s1;         //object s1 is created...
    s1.input();         // input function is called...
    s1.display();       //display function is called...
}
