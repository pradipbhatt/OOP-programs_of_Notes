// Program to implement bubble sort
#include <stdio.h>
int main()
{
   system("cls");
   int a[5], i, j, temp;
   printf("Enter the number in array:\n");
   for (i = 0; i < 5; i++)
   {
      printf("Enter the %d element of the array", i + 1);
      scanf("%d", &a[i]);
   }
   printf("Data before sorting ");
   for (i = 0; i < 5; i++)
   {
      printf("%d\t ", a[i]);
   }
   for (i = 0; i < 5; i++)
   {
      for (j = 0; j < 4 - i; j++)
      {
         if (a[j + 1] < a[j])
         {
            temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
         }
      }
   }

   printf("\n Data after sorting  ");
   for (i = 0; i < 5; i++)
   {
      printf("%d \t ", a[i]);
   }
}
