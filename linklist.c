#include<stdio.h>
#include<stdlib.h>
struct Node
{

    int data;
    struct Node*next;

};
typedef struct Node node;
node*head;
int main()
{
    int n;
    printf("Enter the size of node:  \n");
    scanf("%d",&n);

    head=(node*)malloc(sizeof(node));

    printf("Enter the value of node 1:  \n");
    scanf("%d",&head->data);

    head->next=NULL;

    creat_node(n);
    display();
    insert_beg();
    display();
    search();
    display();


}

void creat_node(int n)
{

    node*temp,*newnode;
    int i;
    temp=head;

    for(i=2;i<=n; i++)
    {

        newnode=(node*)malloc(sizeof(node));
        printf("Enter the value of node %d : \n",i);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;

    }

}

void display()
{

    node*temp;
    temp=head;

    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }

}

void insert_beg(){

node*newnode;
newnode=(node*)malloc(sizeof(node));
printf("Enter new data\n:  ");
scanf("%d",&newnode->data);
newnode->next=head;

head=newnode;

}
void search()
{
    node *temp;
    temp=head;
    int loc=1,key,flag=0;

    printf("\nEnter the data you want to search: ");
    scanf("%d", &key);

    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            flag=0;
            break;
        }
        else
        {
            flag++;
        }
        temp=temp->next;
        loc++;
    }

    if(flag==0)
    {
        printf("Found in : %d ", loc);
    }
    else
    {
        printf("Not Found");
    }
}
