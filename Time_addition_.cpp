#include <iostream>
#include <stdlib.h>
using namespace std;
class time
{
    int hour, minutes;

public:
    void get_time(int h, int m) // function declerartion/prototype
    {
        hour = h;
        minutes = m;
    }

    void display()
    {
        cout << hour << "hour and ";
        cout << minutes << "minutes." << endl;

    }

     int sum(time t1, time t2);           //sum function is decleared here...
};

  int time::sum(time t1, time t2)
{
    minutes = t1.minutes + t2.minutes;      // total minutes is calculated...
    hour = minutes / 60;                    //minutes is converted into hours...
    minutes = hour % 60;                    //minutes is calculated when hour is in fraction
    hour = hour + t1.hour + t2.hour;
}

int main()
{
    time T1, T2, T3;      //3 objects are created i.e Initialized
    system("cls");
    T1.get_time(8, 50);   //values were passes as argument for getdata function..
    T2.get_time(4, 40);    //values were passes as argument for getdata function..
    T3.sum(T1, T2);        //sum function is called here for addition of two objects T1 and T2..
    T3.display();          //Display function is called here for showing output...
    return 0;
}
