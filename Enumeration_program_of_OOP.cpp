//Program for Enumeration 
//.used to create symbolic constants.
//Syntax==enum name_of_enumeration{mem1, mem2, mem3}variable;
 #include<iostream>
#include <iomanip> 
using namespace std;
enum direction {East, West, North, South}dir;
int main()
{
    system("cls");
   dir = South;
   cout<<setw(20);
   cout<<dir;
   return 0;
}
