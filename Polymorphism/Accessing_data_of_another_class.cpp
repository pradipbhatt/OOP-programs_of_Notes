#include<iostream>

using namespace std;

class First

{

public:

int x;

First()

{

x=5;

}

};

class Second :public First

{

public:

void disp()

{

cout<<x;

}

};

int main()

{
    system("cls");

Second s1;

s1.disp();

return 0;

}