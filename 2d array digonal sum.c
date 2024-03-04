#include<stdio.h>
int main()
{
    int r,c,sum=0;
    int A[4][4];
    for(r=0;r<4;r++)
    {
        for(c=0;c<4;c++)
        {
            scanf("%d",&A[r][c]);
        }
    }




    for(r=0;r<4;r++)
    {
        for(c=0;c<4;c++)
        {
            printf("%d ",A[r][c]);
        }
        printf("\n");
    }
    for(r=0;r<4;r++)
    {
        for(c=0;c<4;c++)
            if(r==c)
            sum=sum+A[r][c];
    }
    printf("%d",sum);
}

