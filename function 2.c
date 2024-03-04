#include<stdio.h>
double tringle(double a,double b){

return 0.5*a*b;
}

int main(){

 double base,height;
 printf("Enter base: ");
 scanf("%lf",&base);

  printf("Enter height: ");
 scanf("%lf",&height);

 double area=tringle(base,height);
 printf("%.lf\n",area);




}

