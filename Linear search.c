#include<stdio.h>
int main()
{
   int n,i,j,temp,a[1000];
    printf("Enter the value number: ");
    scanf("%d",&n);
    printf("Enter the value: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

   for(i=0;i<n;i++)
   {
       if(value==a[i])
       {
           pos=i+1;
           break;
       }
   }
   if(pos==-1)
    printf("not found\n");
   else
    printf("position=%d\n",pos);
}
