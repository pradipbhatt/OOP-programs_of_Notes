#include<iostream>
using namespace std;
 class time
 {
     int hh,mm,ss;
     public:
     //default constructor time is defined here
      time()
      {
         hh=0;
         mm=0;
         ss=0;
     }
     //integer type variable is passed as parameterized argument 
     time(int s) 
     {
         hh=s/3600;
         mm=s/60;
         ss=s%60;
     }
     //show function is defined here for showing output
     void show()
     {
         cout<<hh<<":"<<mm<<":"<<ss;
     }
 };
   int main()
   {
       system("cls");
       time t1,t2;
       //t1(9200) equals to t1=9200 here int 9200 is converterd in time type variable
       t1=time(9200);
       //t2=2020 i.e 2020 integer is now time type variable....
       t2=2020;
       cout<<"Time T1 =";
       t1.show();
       cout<<"\n Time T2 =";
       t2.show();
   }