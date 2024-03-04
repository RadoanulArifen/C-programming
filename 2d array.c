#include<stdio.h>
int main()
{
    int r,c;
    int A[3][4];
    for(r=0;r<3;r++)
    {
        for(c=0;c<4;c++)
        {
            scanf("%d",&A[r][c]);
        }
    }




    for(r=0;r<3;r++)
    {
        for(c=0;c<4;c++)
        {
            printf("%d ",A[r][c]);
        }
        printf("\n");
    }
}
