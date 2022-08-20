#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* link;
}nd;
nd * head;

nd * createNode(int data,nd *link)
{
    nd * temp;
    temp=(nd *)malloc(sizeof(nd));        
    if(temp==NULL)
    {
        printf("Sorry Can not allocate memory!!!");
        exit(0);
    }
    else
    {
        temp->data=data;
        temp->link=link;
        return temp;
    }
}

int main()
{
    head=NULL;
    nd *t=createNode(5,head);    
    head=t;

    t=createNode(6,head);    
    head=t;

    //code to display the linked list
    nd *temp=head;
    printf("Start->");
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->link;
    }
    printf("NULL");    
    return 0;
}