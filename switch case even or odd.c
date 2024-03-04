
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number= ");
    scanf("%d",&num);

    switch(num%2==0)
    {
    case 1:
        printf("even");
        break;
  default:
        printf("odd");
        break;
    }

    return 0;
}
