#include<iostream>
using namespace std;
class student
{
private: 
  static int count;
public:
   int price;
   void getdata(float a)
   {
       price=a;
       count++;
   }
    void showcount()
    {
        cout<<"count ="<<count<<endl;
    }
};

int student::count;

int main()
{
    system("cls");
  student s1,s2,s3;
  s1.showcount();
  s2.showcount();
  s3.showcount();
  s1.getdata(1.2);
  s2.getdata(2.3);
  s3.getdata(2.3);
 cout<<"After reading data ="<<endl;
  s1.showcount();
  s2.showcount();
  s3.showcount();
}