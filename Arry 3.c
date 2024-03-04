#include<stdio.h>
int main()
{
    int a[5],i,sum=0;
    printf("Enternumber: ");

    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("the num of sum=%d\n",sum);
     printf("the num of avg=%2.f\n",(float)sum/5);

     return 0;
}
