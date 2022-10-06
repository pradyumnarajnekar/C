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
    struct node *head_start, *node1, *new_node_at_front, *temporary1, *temporary2;
    int n, i, data, new_data_for_new_node;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    if(n>=1)
    {
        head_start=(struct node *) malloc(sizeof(struct node));
        printf("\nEnter the data for node 1 : ");
        scanf("%d",&data);
        head_start->data=data;
        head_start->next=head_start;
        head_start->previous=head_start;
        temporary1=head_start;
        for(i=2;i<=n;i++)
        {
            node1=(struct node *)malloc(sizeof(struct node));
            printf("\nEnter the data for node %d : ",i);
            scanf("%d",&data);
            node1->data=data;
            node1->next=head_start;
            node1->previous=temporary1;
            temporary1->next=node1;
            temporary1=node1;
        }
        temporary1->next=head_start;
    }
    n=1;
    temporary2=head_start;
    printf("\nThe Circular Doubly Linked List is : \n");
    do
    {
        printf(" <= %d => ",temporary2->data);
        temporary2=temporary2->next;
        n++;
    }
    while(temporary2!=head_start);
    printf("\nEnter the data for the node  to be inserted at front : ");
    scanf("%d", &new_data_for_new_node);
    new_node_at_front=(struct node *) malloc(sizeof(struct node));
    new_node_at_front->data=new_data_for_new_node;
    new_node_at_front->next=head_start;
    new_node_at_front->previous=temporary1;
    head_start->previous=new_node_at_front;
    temporary1->next=new_node_at_front;
    head_start=new_node_at_front;
    n=1;
    temporary2=head_start;
    printf("\nAfter insertion at front, the Circular Doubly Linked List is : \n");
    do
    {
        printf(" <= %d => ",temporary2->data);
        temporary2=temporary2->next;
        n++;
    }
    while(temporary2!=head_start);
    return 0;
}
