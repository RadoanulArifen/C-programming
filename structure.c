#include<stdio.h>
struct person{

   int age;
   int selary;


};
int main()
{
    struct person person1,person2;
    person1.age=20;
    person1.selary=12222;

    printf("%d\n",person1.age);
    printf("%d\n",person1.selary);

    person2.age=20;
    person2.selary=12222;

    printf("%d\n",person2.age);
    printf("%d\n",person2.selary);
}
