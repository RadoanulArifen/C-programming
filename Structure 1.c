#include<stdio.h>
struct node{

    int data;
    struct node*next;
};
int main(){
 struct node a,b,c;
 a.data=10;
 b.data=20;
 c.data=30;

 a.next=&b;
 b.next=&c;
 c.next=NULL;

 printf(a.next);
 printf(&b);
}
