#include<stdio.h>
struct Scientist{

      float age;
      int NOP;
      char Name[20];

};

int main()
{
    struct Scientist sntst1,sntst2;

    printf("Enter the Name: ");
    gets(sntst1.Name);
    printf("Enter age: ");
    scanf("%2f",&sntst1.age);
    printf("enter NOP: ");
    scanf("%d",&sntst1.NOP);


    printf("Enter the Name: ");
    gets(sntst2.Name);
    printf("Enter age: ");
    scanf("%2f",&sntst2.age);
    printf("enter NOP: ");
    scanf("%d",&sntst2.NOP);





     printf("%s\n",sntst1.Name);
     printf("%f\n",sntst1.age);
     printf("%d\n",sntst1.NOP);




     printf("%s\n",sntst2.Name);
     printf("%f\n",sntst2.age);
     printf("%d\n",sntst2.NOP);

     return 0;
}
