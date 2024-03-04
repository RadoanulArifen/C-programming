#include<stdio.h>
int main()
{
    int p,q,k,id,i;
    scanf("%d %d %d %d",&p,&q,&id,&k);

    for(i=k+1;i<p;i++)
    {
        if(i%3==0)
            printf("%d\n",i);
    }
}
