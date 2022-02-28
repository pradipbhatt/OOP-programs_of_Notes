// Program for sum of two numbers using function in c++....
#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int t;
    t = a + b;
    return (t);
}

int main()
{
    system("cls");
    int x, y, s;
    cout << "Enter any Two numbers";
    cin >> x >> y;
    s = sum(x, y);
    cout << "The sum is =" << s << endl;
}
