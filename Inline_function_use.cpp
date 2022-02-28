// Program for sum of two numbers using function in c++....
/*Inline function doesnt work when
1>Functions having more branches of loops or goto statements,switch statements etc...
2>if function is recursive..
3>For functions having static functions...
*/
#include <iostream>
using namespace std;

inline int sum(int a, int b)  //inline function is created here just for increase the execution time.
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
