#include<stdio.h>
int main()
{
    int a[1000],i,sum=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++){
        if(a[i]%2!=0)
            sum=sum+a[i];
    }
    printf("%d",sum);


    return 0;
}

