//  Reverse the array elements

#include<stdio.h>
int main(){
    int i,j, n, a[50];

        printf("Enter the no of elements of an array:\n");
        scanf("%d",&n);
        printf("Enter the elements of array:\n");
        for ( i=0;i<n;i++){
            scanf("%d", &a[i]);

        }
        printf("Array in reverse order is:");
        for (  i=n-1;i>=0; i--){
        printf("\n%d\n",a[i]);
        }
    return 0;
}
       
