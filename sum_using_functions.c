#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,n,s;
system("cls");
input();
s=sum(i,j);
printf("The sum is %d",s);
}

void input(int a, int b)
{
  printf("Enter any two numbers.");
  scanf("%d%d",&a,&b);  
}

int sum (int x, int y)
{
    int k;
    k=x+y;
    return(k);
}
