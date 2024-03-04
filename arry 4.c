#include<stdio.h>
int main()
{
    int num[1000],max,i,n,min,sum;
    printf("How many number you need= ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&num[i]);

    max=min=num[0];
    for(i=0;i<n;i++)
    {
        if(max<num[i])
            max=num[i];
        if(min>num[i])
            min=num[i];
    }
    sum=max-min;



    printf("The maximum number is=%d\n",max);
     printf("The minimum number is=%d\n",min);


     printf("difference= %d",sum);


    return 0;
}
