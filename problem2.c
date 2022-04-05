// search the element in the array by using linear search
#include <stdio.h>
int main()
{
    system("cls");
    int a[5], i, j, k, n;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to be searched ");
    scanf("%d", &k);
    for (i = 0; i < 5; i++)
    {
        if (k == a[i])
        {
            printf("%d is found inside %d index", k, i);
            break;
        }
    }
    if (i == 5)
    {
        printf("%d is not found ", k);
    }
}