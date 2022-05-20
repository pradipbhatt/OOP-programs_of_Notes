#include<iostream>
using namespace std;
class counter{
    private:
    unsigned int count;
    public:
    counter():count(0)      //constrctor initialized automatically while we create the object of type class
    {}
    unsigned int get_data()
    {
        return count;
    }
    counter operator ++()            //increament count
    {
        ++count;
        counter temp;
        temp.count=count;
        return temp;
    }
};
int main()
{ 
    system("cls");
    counter c1,c2;                   //define and initialize
    cout<<"\n C1="<<c1.get_data();   //display   
    cout<<"\n C2="<<c2.get_data();

    ++c1;                //increament c1 by 1
    ++c1;
    c2=++c1;                //c1=2 ,c2=2 
    cout<<"\nAfter increament C1="<<c1.get_data();   //display again
    cout<<"\nAfter increament C2="<<c2.get_data();
    return 0;      //end
}