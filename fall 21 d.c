
#include<stdio.h>
void fun(int x);
int main()
{
    int i,n,number;
    scanf("%d",&n);
    fun(n);
}
void fun(int x){
    int i;
  for(i=1;i<=x;i++)
    printf("%d",i);


}


