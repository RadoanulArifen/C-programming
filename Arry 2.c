#include<stdio.h>
int main()
{
  int num[5]={10,10,20,10,10,10},sum,i;
  sum=0;
  for(i=0;i<=5;i++)
  {
      sum=sum+num[i];
  }

  printf("Number of sum is=%d\n",sum);
  printf("Number of avg is=%2.f\n",(float)sum/5);



    return 0;
}

