// WAP for constant function and constant object
#include<iostream>
#include<math.h>       //header file including logic of sqrt...
using namespace std;

class complex
{
	int r,i;
	public:
	getdata()                //Function for input real and imaginary numbers..
	{
		cout<<"Enter real and Imaginary roots =";
		cin>>r>>i;
	}
 void magnitude() const;        //Output function for showing magnitude of entered data....[it is constant function decleration...]
};
 
void complex::magnitude() const       //it is constant function defination...
{
	float mag;
	mag=sqrt(pow(r,2)+pow(i,2));
	cout<<"Magnitude="<<mag;
}

int main()
{
	system("cls");
	complex c1;
	c1.getdata();
	c1.magnitude();
}
