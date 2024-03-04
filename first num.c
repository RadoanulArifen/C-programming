#include<stdio.h>
int main()
{
    int n;
    printf("Enter the num= ");
    scanf("%d",&n);

    while(n>=10)
    {
        n=n/10;
    }

    printf("first digit=%d",n);
}

