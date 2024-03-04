#include<stdio.h>
#include<stdlib.h>
#define N 4

int top=-1;
int stack[N];
void push();
void pop();
void pick();
void display();

int main()
{

    int choice;

    while(1)
    {
        printf("\n1.push the element\n2.pop the element\n3.top the element\n4.display the element\n5.exit\n");
        printf("\nEnter the choice");
        scanf("%d",&choice);
        switch(choice)
        {

        case(1):
            push();
            break;
        case(2):
            pop();
            break;
        case(3):
            pick();
            break;
        case(4):
            display();
            break;
        case(5):
            exit(0);
        default:
            printf("\nInvalid choice");


        }


    }


}

void push()
{

    int x;
    printf("Enter the data: ");
    scanf("%d",&x);

    if(top==N-1)
    {
        printf("\nOverflow");
    }

    else
    {
        top++;
        stack[top]=x;
    }

}

void pop()
{

    if(top==-1)
    {
        printf("\nUnderflow");
    }
    else
    {
        printf("\nPop element= %d",stack[top]);
        top--;
    }

}

void pick()
{
    if(top==-1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("/nTop element= %d",stack[top]);
    }


}

void display(){
    int i;

    if(top==-1)
    {
        printf("\Stack is empty");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for( i=top; i>=0; i--)
        {
            printf("%d ",stack[i]);
        }
    }

}
