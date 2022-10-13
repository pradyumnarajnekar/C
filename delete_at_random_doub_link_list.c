#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node *previous;
int data;
struct node *next;
};
int main()
{
struct node *head_start, *tail_end, *node, *temporary, *temporary2, 
*temporary3;
int n, i, x, data, position;
printf("Enter the number of nodes : ");
scanf("%d", &n);
if(n>=1)
{
head_start = (struct node *) malloc(sizeof(struct node));
if(head_start!=NULL)
{
printf("\nEnter the data for node 1 : ");
scanf("%d",&data);
head_start->data=data;
head_start->previous=NULL;
head_start->next=NULL;
tail_end=head_start;
for(i=2; i<=n; i++)
{
node = (struct node *) malloc(sizeof(struct node));
if(node!=NULL)
{
printf("\nEnter the data for node %d : ",i);
scanf("%d", &data);
node->data=data;
node->previous=tail_end;
node->next=NULL;
tail_end->next=node;
tail_end=node;
}
else
{
printf("List is empty");
break;
}
}
}
else
{
printf("List is empty");
}
}
if(head_start==NULL)
{
printf("List is empty");
}
else
{
temporary=head_start;
printf("\nThe data entered in the doubly linked list is : \n");
while(temporary!=NULL)
{
printf(" <= %d => ",temporary->data);
n++;
temporary=temporary->next;
}
}
printf("Deleting the node at random\n");
printf("Enter the number of node to be deleted\n");
scanf("%d", &x);
temporary2=head_start;
while(temporary2->data!=x)
{
temporary3=temporary2;
temporary2=temporary2->next;
}
temporary3->next=temporary2->next;
free(temporary2);
n=1;
if(head_start==NULL)
{
printf("List is empty");
}
else
{
temporary=head_start;
printf("\nAfter deletion, the doubly linked list is : \n");
while(temporary!=NULL)
{
printf(" <= %d => ",temporary->data);
n++;
temporary=temporary->next;
}
}
return 0;
}
