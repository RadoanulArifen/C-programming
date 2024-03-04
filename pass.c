#include<stdio.h>
int main()
{
    int marks;
    printf("Enter any marks: ");
    scanf("%d",&marks);
    if (marks>=33)
        printf("PASS");
    else
        printf("FAIL");
}
