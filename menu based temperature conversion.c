#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedTemp;
    printf("Temperature conversion menu\n");
    printf("1.Fahrenheit to Celsius\n");
    printf("2.Celsius to Fahrenheit\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        {
            printf("Enter the Fahrenheit temperature: ");
            scanf("%f",&temp);
            convertedTemp=(temp-32)/1.8;
            printf("the temperature in Celsius: %f\n",convertedTemp);
            break ;
        }
    case 2:
        {
          printf("Enter the Celsius temperature: ");
            scanf("%f",&temp);
            convertedTemp=(1.8*temp)+32;
            printf("the temperature in Fahrenheit: %f\n ",convertedTemp);
            break;
        }
    default:
        printf("not a correct option");

    }
    return 0;
}
