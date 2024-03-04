#include<stdio.h>
int main()
{
    int num[1000], n,i,max,min,dif;
    printf("How many num you nedd= ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&num[i]);

    max=min=num[0];
    for(i=0;i<n;i++){
        if(max<num[i])
            max=num[i];
        if(min>num[i])
            min=num[i];
    }
     printf("max=%d\n",max);
        printf("min=%d\n",min);
    dif=max-min;
    printf("diff=%d\n",dif);

}
