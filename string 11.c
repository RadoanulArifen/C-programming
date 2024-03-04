#include<stdio.h>
int main()
{
    char str[30]="Arifen";
    char str2[30];
    int i=0,len=0,j;
    while(str[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++){
        str2[j]=str[i];
    }
       str2[j]='\0' ;

       printf("%s\n",str2);

}
