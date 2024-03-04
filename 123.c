#include<stdio.h>
int main()
{
    float a,b,sum,avg;
    int n;

    printf("Enter your roll number= ");
    scanf("%d",&n);
    a = n%10;
    b =(n/10)%10;

    avg=(a+b)/2;

    printf("%.2f\n",avg);



    return 0;
}
