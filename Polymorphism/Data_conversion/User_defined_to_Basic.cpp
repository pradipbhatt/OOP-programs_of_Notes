//Program for converting tempreature in celcius to tempreature in farenheit..
//by the data conversion of user defined data conersion to basic type... 
#include<iostream>
using namespace std;
class celcius
{
  private:
  float tempr;
  public:
//default constructor is defiend here when we initialize the object of class celcius..
  celcius()
  {
      tempr=0.0;
  }
// Operator function is defined here as basic data type,which takes no argumemts...
  operator float()   
  {
      float fer1;
      fer1=(tempr*9)/5+32;
      return fer1;
  }
//gettempr function is defined here to get input tempreature as a data...  
  void gettempr()
  {
      cout<<"Enter the tempreature in celcius =";
      cin>>tempr;
  }
};
int main()
{
    system("cls");
    celcius cel;
    float fer;
    cel.gettempr();   //cel object of type celcius call function gettempr.. 
    fer=cel; //fer=float(cel) i.e cel is celcius type data variable is changed into float type .  
    cout<<"Degree F ="<<fer<<endl;

}