#include<stdio.h>
#include<conio.h>

struct node{
int data;
struct node * next;
};

int main(){
struct node * head=NULL;
push(head,2);
push(head,3);
push(head,4);
push(head,5);
printlist(head);
return;

}
struct node push(struct node * head_ref,int new_data)
{
    struct node * new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=head_ref;
    head_ref->new_node;
    return new_node;
}

void printlist(struct node * head_ref)
{
    while(head_ref!=NULL)
    {
        printf("%d",head_ref->data);
        head_ref=head_ref->next;
    }
}

