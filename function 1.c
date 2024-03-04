#include<stdio.h>

int sqr(int a){
return a*a;
}
int main(){

int num;
printf("Enter any number: ");
scanf("%d",&num);

int result=sqr(num);
printf("%d",result);

}

