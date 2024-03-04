#include<stdio.h>
#include<stdlib.h>

struct Node{

int data;
struct Node*next;

};
typedef struct Node node;
node*head;

int main(){
    int n;

printf("Enter the node number: \n");
scanf("%d",&n);

head=(node*)malloc(sizeof(node));
printf("Enter the data of node 1: ");
scanf("%d",&head->data);

head->next=NULL;

creat_node(n);
display();
insert_beg();
display();



}

void creat_node(int n){

node*newnode,*temp;
int i;
temp=head;

for(i=2;i<=n;i++){
    newnode=(node*)malloc(sizeof(node));
    printf("Enter the data of node %d: ",i);
    scanf("%d",&newnode->data);

    newnode->next=NULL;
    temp->next=newnode;
    temp=temp->next;


}



}
void display(){

node*temp;
temp=head;

while(temp!=NULL){
    printf("%d->",temp->data);
    temp=temp->next;
}


}

void insert_beg(){

node*newnode;
newnode=(node*)malloc(sizeof(node));
printf("enter the new data: ");
scanf("%d",&newnode->data);
newnode->next=head;
head=newnode;

}
