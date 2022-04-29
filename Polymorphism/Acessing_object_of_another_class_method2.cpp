#include <iostream> 
using namespace std; 
class retest; 
class test 
{ 
    int a = 0xFF, b=5, c; 
public : 
	void showtime() 
	{ 
		cout << "ShowTime!" << endl; 
	} 
	friend class retest; 
}; 
class retest 
{ 
	int a1, b1, c1; 
public: 
	void restime(test t) 
	{ 
		cout << "Restime" << endl; 
		cout << t.a << endl; 
        cout << t.b << endl;
	} 
}; 
int main() 
{ 
    system("cls");
    test t; 
    retest rt; 
	rt.restime(t); 
    return 0; 
} 