#include<stdio.h>
int main()
{
    int max,min,n,i,num[10000];
    printf("How many number you want to input: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

    max=min=num[0];
    for(i=0;i<n;i++)
    {
        if(max<num[i])
            max=num[i];
        if(min>num[i])
            min=num[i];
    }

    printf("Maximum value is:%d\n",max);
    printf("minimum value is:%d\n",min);

}
