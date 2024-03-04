#include<stdio.h>
int main()
{
    int id,a,b,c,d,e,f,money;
    scanf("%d\n%d%d%d%d%d%d",&id,&a,&b,&c,&d,&e,&f);
    money=(a-b)+(c+d)+(e*f);

    if(money>=id){
        printf("Yeah!!let's have pizza!!");
    }else
        printf("Oh no!!let's get something else");


    return 0;
}
