#include<stdio.h>

calculatePower(double base,double ex)
{
   for(i=1;i<=ex;i++)
    {
    result=result*base;
    }
printf("%.lf\n",result);


}


int main(){

 double base,ex,result=1,i;
 printf("Enter base: ");
 scanf("%lf",&base);

  printf("Enter Exponent: ");
 scanf("%lf",&ex);

 calculatePower(base,ex);

}


