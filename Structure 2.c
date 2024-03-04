#include<stdio.h>
struct node{

    int i;
    char c;
    struct node*next;
};
int main(){
struct node v1;
struct node v2;

v1.i=10;
v1.c='a';
v1.next=NULL;

v2.i=20;
v2.c='b';
v2.next=NULL;

v1.next=&v2;
printf("%d\n%c",v1.next->i,v1.next->c);

}
