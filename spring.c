#include<stdio.h>
int main()
{
    int k,d,p;
    scanf("%d%d%d",&k,&d,&p);

   if(k<d||k<p)
   printf("karma");
   else if(d<k||d<p)
    printf("darma");
   else if(p<k||p<d)
    printf("parma");
   else
    printf("shop owner");




    return 0;
}
