#include<stdio.h>
int main()
{
    int a[1000],n,i,sum=0;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        if(a[i]<0){
            a[i]=1;
        }
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("%d\n",sum);

    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

