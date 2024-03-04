#include<stdio.h>
int main()
{
    int odd=0,even=0,n,i,num[10000];
    printf("How many number you want to input: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

    for(i=0;i<n;i++)
    {
        if(num[i]%2!=0)
            printf("odd value is:%d\n",num[i]);
        else if (num[i]%2==0)
           printf("even value is:%d\n",num[i]);

    }



}

