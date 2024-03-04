#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter num1= ");
    scanf("%d",&num1);
    printf("enter num2= ");
    scanf("%d",&num2);

    if (num1>num2)
        printf("large=%d\n",num1);
    else if (num1<num2)
        printf("large=%d\n",num2);
    else
        printf("numbers are equal");
    return 0;

}
