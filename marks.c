#include<stdio.h>
int main()
{
    float marks;
    printf("Enter any marks");
    scanf("%f",&marks);

    if (marks>=80)
       printf("A+");
       else if (marks>=70)
       printf("A");
       else if (marks>=60)
       printf("A-");
       else if (marks>=33)
       printf("PASS");
       else
        printf("FAIL");
       return 0;
}
