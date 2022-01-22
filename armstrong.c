#include<stdio.h>
int main(){

    int a[5], r, i;
    
    

    printf("Enter the array:\n");
    for ( i=0;i<2;i++){
    scanf("%d", &a[i]);
    }
    
    for( i=0; i<2; i++){
     int    sum=0;
         int temp=a[i];                                  
            while(a[i]>0){
                r=a[i]%10;
                sum=sum+r*r*r;
                a[i]=a[i]/10;

            }
            a[i]=temp;
            if(sum==a[i])
            printf("The no %d is armstrong.\n", a[i]);
            else 
            printf("The no %d is not armstrong\n", a[i]);
    }


    return 0;
}
