#include<iostream>
#include<iomanip>
using namespace std;
class student 
{ 
    string name;
    int roll;
    float marks;
    public:
 
       int enter()
      {
        cout<<"Enter the name of student by user ="<<endl;
        cin>>name;  
        cout<<"Enter the roll no. of student ="<<endl;
        cin>>roll; 
        cout<<"Enter the marks of  student="<<endl;
        cin>>marks; 
      }

         int display()
         {
          cout<<"The name of student is="<<setw(4)<<name<<endl;
          cout<<"The roll of student is="<<setw(4)<<roll<<endl;
          cout<<"The marks of student is="<<setw(4)<<marks<<endl;
         }   
};

int main()
{
    system("cls");
    student s1;
    s1.enter();
    s1.display();
}
