#include<iostream>
using namespace std;
int main()
{
    int *pa ,*pb, *psum;    //*pa,*pb,*psum three pointers were decleared...
    system("cls");
    pa=new int;             //pa=int type data is alloacted....
    pb=new int;             //pb=int type data is alloacted
    psum=new int;           //psum=int type data is alloacted....
    cout<<"Enter two integers..";
    cin>>*pa>>*pb;
    *psum=*pa+*pb;
    cout<<"The sum is ="<<*psum; 
    delete pa;                     //pa=int type data is de-alloacted....
    delete pb;                 //pb=int type data is de-alloacted....
 
}
