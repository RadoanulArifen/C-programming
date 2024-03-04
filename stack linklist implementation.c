#include<stdio.h>
#include<stdlib.h>

struct node{

int data;
struct node*next;


};
struct node*top=0;

void push(int);
void pop();
void peek();
void display();

void main(){

int choice,x;

while(1)
    {
        printf("\n1.push the element\n2.pop the element\n3.top the element\n4.display the element\n5.exit\n");
        printf("\nEnter the choice: ");
        scanf("%d",&choice);
        switch(choice)
        {

        case(1):
            printf("Enter the value: \n");
            scanf("%d",&x);
            push(x);
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

void push(int x){

struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->next=top;
top=newnode;
printf("\nInsertion is successful\n");


}

void pop(){
    struct node*temp;
    temp=top;
if(top==NULL){
    printf("\nStack is empty\n");

}
else{
    printf("\nDeleted element is: %d",top->data);
    top=top->next;
    free(temp);
}



}

void pick(){
if(top==NULL){
    printf("\nStack is empty\n");
}
else{
    printf("\nTop element is:%d",top->data);
}



}

void display(){
struct node*temp;
temp=top;
if(top==NULL){
    printf("\nStack is empty");
}
else{
    while(temp!=NULL){
        printf("%d-->",temp->data);
        temp=temp->next;
    }
}



}
