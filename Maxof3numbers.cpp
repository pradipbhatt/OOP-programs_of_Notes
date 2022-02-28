// Program for determinig the largest number entered by the user....
#include <iostream>
using namespace std;

void max(int a, int b, int c)
{
    if ((a > b) && (b > c))
        cout << "Largest number: " << a;
    else if ((b >= a) && (b >= c))
        cout << "Largest number: " << b;
    else
        cout << "Largest number: " << c;
}

int main()
{
    int x, y, z;

    cout << "Enter any Three numbers";
    // cout<<"Hello parry";
    cin >> x >> y >> z;
    max(x, y, z);
}
