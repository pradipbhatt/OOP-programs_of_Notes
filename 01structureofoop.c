#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[20];
    int roll;
    float marks;
} s;

int main()
{
    system("cls");
    printf("Enter the name of the student");
    gets(s.name);

    printf("Enter roll : \n ");
    scanf("%d", &s.roll);

    printf("Enter marks : \n ");
    scanf("%d", &s.marks);

    printf("\n Name=%s  \t roll=%d  \t   marks=%f", s.name, s.roll, s.marks);
}
