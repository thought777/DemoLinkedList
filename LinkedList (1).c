#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
}nd; 

nd *head=NULL;

int insertNodeatbegining(int item)
{
    nd *temp=(nd *)malloc(sizeof(nd));
    // (*temp).data=item; [indirection operator -> shortcut for this symbol]
    temp->data=item;
    temp->link=head;
    head=temp;
}
void display()
{
    nd *t;
    t=head;
    while(t!=NULL)
    {
        printf("%d->",t->data);
        t=t->link;
    }
    printf("NULL\n");
}
int main()
{
    int n,item;
    printf("How many nodes you want to insert:");
    scanf("%d",&n);
    int i=1;
    while (i<=n)
    {
        printf("\nPlease give data to insert at node no.%d:",i);        
        scanf("%d",&item);
        insertNodeatbegining(item);
        i++;
    }
    
    display();   
}