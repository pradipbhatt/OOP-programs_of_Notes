// problem 4 sorting the array using selection using algorithm..
#include <stdio.h>
#define n 10
int main()
{
   system("cls");
   int a[n], i, j, temp;
   printf("Enter the number in array:\n");
   for (i = 0; i < n; i++)
   {
      printf("Enter the %d element of the array", i + 1);
      scanf("%d", &a[i]);
   }


   for (i = 0; i < n-1; i++)
   {
      for (j = i+1; j <n; j++)
      {
         if (a[i] < a[j])
         {
            temp = a[j];
            a[i] = a[j ];
            a[j ] = temp;
         }
      }
   }

   printf("\n Data after sorting  ");
   for (i = 0; i < n; i++)
   {
      printf("%d \t ", a[i]);
   }
}
