#include <iostream>
#include <string.h>

using namespace std;

class Marks
{
	private:
		int rno;
		float perc;
	
	public:
		//Default constructor
		Marks()
		{rno = 0; perc = 0.0f;}
		
		//input roll numbers and percentage
		void readMarks(void)
		{
			cout<<"Enter roll number: ";
			cin>>rno;
			cout<<"Enter percentage: ";
			cin>>perc;
		}
		
		//print roll number and percentage
		void printMarks(void)
		{
			cout<<"Roll No.: "<<rno<<endl;
			cout<<"Percentage: "<<perc<<"%"<<endl;
		}
};



class Student
{
	private:
		//object to Marks class
		Marks objM;
		char name[30];
	
	public:
		//input student details  is Entered firstly....
		void readStudent(void)
		{
			//Input name
			cout<<"Enter name: ";
			cin.getline(name, 30);
			//input Marks
			objM.readMarks();	        //readmarks function of 1st class is called here with the help of 2nd class object		
		}
		
		//print student details
		void printStudent(void)
		{
			//print name
			cout<<"Name: "<<name<<endl;
			//print marks
			objM.printMarks();
		}
};

//main code
int main()
{    system("cls");
	//create object to student class
	Student std;
	std.readStudent();
	std.printStudent();
	
	return 0;
}
