//WAP for copy parameterized and default constructor...
#include<iostream>
using namespace std;
class student
{
int id;
public:
student(){}                //default constructor is called here..
student(int a)             //parameterized constructor is defined here...
{
    id=a;
}
student(student &s)         //object ko adress lae as a argument pass garyo so,here copy constructor is called...(&s=s1=200)
{
    id=s.id;
}
int display()
{
    return(id);
}
};

int main()
{
    system("cls");
    student s1(200);             //s1 object le parameterized constructor student lae call garyoo and 200 pass garyoo...
    student s2(s1);              //s2=s1 copy constructor student is called here and s2 is copied to s1.
    student s3(s2);
    student s4(s1);
    cout<<"Id of student s1="<<s1.display()<<endl;
    cout<<"Id of student s1="<<s2.display()<<endl;
    cout<<"Id of student s1="<<s3.display()<<endl;
    cout<<"Id of student s1="<<s4.display()<<endl;

}
