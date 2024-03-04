#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character= ");
    scanf("%c",&ch);
    switch(ch)
    {
   case 'M':
    printf("mail");

    break;

   case 'F':
    printf("Femail");

    break ;

   default:
    printf("uncefecient");
    }

    return 0;
}


