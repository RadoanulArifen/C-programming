#include<stdio.h>
#include<stdlib.h>

struct node
{
    int id;

    struct node *next;
};

typedef struct node node;
node *head;

void createnode(int n)
{
    int i;
    node *newnode,*temp;
    temp=head;

    for(i=2; i<=n; i++)
    {
        newnode=(node*) malloc(sizeof(node));
        printf("Enter ID for the node %d: ", i);
        scanf("%d", &newnode->id);



        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
    }
}
void display()
{
    node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->", temp->id);

        temp=temp->next;
    }
}
int main()
{
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    head= (node*) malloc(sizeof(node));

    printf("Enter the ID of node 1: ");
    scanf("%d", &head->id);



    head->next=NULL;

    createnode(n);
    display();
    printf("After deleting the first node: \n");
    delete_first();
    display();
    printf("After deleting the last node: \n");
    delete_last();
    display();
    printf("After deleting the middle node: \n");
    delete_middle();
    display();

    return 0;
}
void delete_first()
{
    node*temp;
    temp=head;
    head=temp->next;
    free(temp);
}

void delete_last()
{

    node*prev,*temp;

    temp=head;

    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    free(temp);
    prev->next=NULL;

}
void delete_middle()
{
    int i,pos=0;
    node*curr,*temp,*prev;
    temp=head;
    printf("Enter the position of the node you want to delete:  \n");
    scanf("%d",&pos);
    for(i=1; i<pos; i++)
    {
        prev=temp;
        curr=temp->next;
        temp=temp->next;
    }
    prev->next=curr->next;
    free(curr);



}

