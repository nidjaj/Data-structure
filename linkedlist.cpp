#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
int data;
struct node * next;}
*start=NULL;

void insert_at_first()
{
    struct node * new_node=(struct node *)malloc(sizeof(struct node));
    if(new_node==NULL){
        printf("memory error\n");
    }
    printf("enter data :\n");
    scanf("%d",&new_node->data);
    new_node->next=start;
    start=new_node;
}
void insert_at_last()
{
    struct node *ptr,*new_node;

    new_node=(struct node *)malloc(sizeof(struct node));
    if(new_node==NULL){
        printf("memory error\n");
    }
    printf("enter data :\n");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    if(start==NULL)
    {
        start=new_node;
        return;
    }
    ptr=start;
    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=new_node;
}

void deletion_at_first()
{
    struct node *ptr;
    if(start==NULL)
    {
        printf("deletion not possible \n");
        return;
    }
    ptr=start;
    start=start->next;
    ptr->next=NULL;
    free(ptr);
}

void deletion_at_last()
{
    struct node *ptr,*prev;
    if(start==NULL)
    {
        printf("deletion not possible\n");
        return;
    }
    if(start->next==NULL)
    {
        start=NULL;
        free(start);
        return;
    }
    ptr=start;
    while(ptr->next!=NULL)
    {
        prev=ptr;
        ptr=ptr->next;
    }
    prev->next=NULL;
    free(ptr);
    ptr->next=NULL;

}

void printlist()
{
    struct node *node=start;
    if(start==NULL)
    {
        printf("linked list is empty");
        return;
    }
    while(start!=NULL)
    {
        printf("%d\t",node->data);
        node=node->next;
    }
}

int main()
{

    insert_at_first();
    insert_at_first();
    insert_at_first();
    insert_at_last();
    insert_at_last();
    //printlist();
    deletion_at_last();
    deletion_at_first();
    printlist();
    return 0;
}

