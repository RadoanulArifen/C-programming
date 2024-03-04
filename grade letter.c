#include<stdio.h>
int main()
{
    int mark;
    printf("Enter any marks: ");
    scanf("%d",&mark);
    if(mark<0 || mark>100)
        printf("mark are invaled");
    else if(mark>=80 && mark<=100)
        printf("A+");
    else if(mark>=70 && mark<=79)
        printf("A");
        else if(mark>=60 && mark<=69)
        printf("A-");

        else
        printf("fail");
}
