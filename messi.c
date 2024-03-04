#include<stdio.h>
int main()
{
int a,b,i,j,temp;
scanf("%d%d",&a,&b);
if(b>a)
{
    temp=a;
    a=b;
    b=temp;
}

for(i=1;i<=a;i++)
    {
     printf("%d",i);
    for(j=1;j<=b;j++)
    {
    printf("%d",j);
    break;
  }
   printf("\n");
   }


    return 0;
}

