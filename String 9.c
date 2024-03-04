#include<stdio.h>
int main()
{
    char str1[]="Radoanul Arifen";
     char str2[]="Radoanul";

     int d=strcmp(str1,str2);
     if(d==0)
        printf("String are equal\n");
     else
        printf("String are not equal\n");
     return 0;
}
