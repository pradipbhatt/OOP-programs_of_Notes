#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif


    int number, divisor;
    bool isprime = true;
    system("cls");
    cout << "Enter any number you wanna...." << endl;
    cin >> number;

    if (number < 0)
    {
        cout << "Entered number is negative" << endl;
    }

    else if (number == 0)
    {
        cout << "The number you entered is zero";
    }

    else if (number > 1)
    {
        for (divisor = 2; divisor <= (number) / 2; divisor++)
        {
            if ((number) % divisor == 0)
            {
                isprime = false;
                break;
            }
        }
    }

    if (isprime)
        cout << "Entered number is prime";
    else
        cout << "Entered number is not prime";
    return 0;
}
}
