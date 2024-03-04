#include<stdio.h>
int main()
{
    int i,j,k,avg=0;
    printf("match: ");
    scanf("%d",&j);
    while(j--)
    {
        scanf("%d",&k);
        avg=(avg+k)/j;

    }
    printf("%d",avg);
}
