//program for type conversion of farenheit type data into celcius type data...
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class celcius;
class farenheit
{
private:
    int a, b;

public:
    void setData(int x)
    {
        a = x;
        
    }
    void showData()
    {
        cout << "\nCelcius type value= " << a;
    }
};

class celcius
{
private:
    int m, n;

public:
    void setData(int x)
    {
        m = x;
    }
    void showData()
    {
        cout << "\nm=" << m;
    }

    operator farenheit()
    {
        farenheit temp;
        temp.setData(m);
        return (temp);
    }
};
int main()
{
    celcius c1;
    farenheit f1;
    c1.setData(32);
    f1 = c1; // convert farenheit type data in celcius type data with the help of casting operator..
    f1.showData();
    getchar();
    return 0;
}
