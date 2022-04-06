#include<iostream>
using namespace std;
int main()
{
    int i,j,temp,*ptr;
    ptr=new int [5];             
    system("cls");
    cout<<"Enter 5 numbers"<<endl;
    for(i=0;  i<5; i++)
    {
        cin>>ptr[i];
    }
   for(i=0; i<4; i++)
   {
       for(j=i+1;   j<5;  j++)
       {
           if(ptr[j]<ptr[i])
           {
               temp=ptr[i];
               ptr[i]=ptr[j];
               ptr[j]=temp;
           }
       }
   }
   cout<<"Numbers in ascending order are ="<<endl;
   for(i=0; i<5;  i++)
   cout<<ptr[i]<<"\t "<<endl;
   delete []ptr;
}
