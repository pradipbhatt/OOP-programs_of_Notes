#include<stdio.h>
int main()
{
    system("cls");
    int i,j,k,h,l,a[5],key,mid;
    printf("enter the elements of an array");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the search element");
    scanf("%d",&key);
    h=4;
    i=0;
    while(i<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
        {
            printf("%d is found in the %d index ",key,mid);
        }
        else if(a[mid]>key)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    if(i>h)
    {
        printf("%d is not found ",key);
    }
}