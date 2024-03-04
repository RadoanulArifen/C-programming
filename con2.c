
#include<stdio.h>
int main()
{
    int X,Y,Z,M,miniamount;
    scanf("%d%d%d%d",&X,&Z,&Y,&M);

    miniamount= ((X*Z)-(Y*M));

    printf("%d\n",miniamount);
    return 0;
}
