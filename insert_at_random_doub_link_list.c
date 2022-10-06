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
    struct node *head_start, *tail_end, *node, *temporary, *new_node_at_random, *temporary2;
    int n, i, num, new_data_for_new_node, position;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);
    if(n>=1)
    {
        head_start = (struct node *) malloc(sizeof(struct node));
        if(head_start!=NULL)
        {
            printf("\nEnter the data for node 1 : ");
            scanf("%d",&num);
            head_start->data=num;
            head_start->previous=NULL;
            head_start->next=NULL;
            tail_end=head_start;
            for(i=2; i<=n; i++)
            {
                node = (struct node *) malloc(sizeof(struct node));
                if(node!=NULL)
                {
                    printf("\nEnter the data for node %d : ",i);
                    scanf("%d", &num);
                    node->data=num;
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
    n=1;
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
    printf("\nEnter the position at which new node is to be added:");
    scanf("%d",&position);
    printf("\nEnter the data for new node:");
    scanf("%d",&new_data_for_new_node);
    temporary2=head_start;
     while(i<position-1 && temporary2!=NULL)
    {
        temporary2 = temporary2->next;
        i++;
    }
    if(temporary2!=NULL)
    {
        new_node_at_random=malloc(sizeof(struct node));
        new_node_at_random->data=num;
        new_node_at_random->next=temporary2->next;
        new_node_at_random->previous=temporary2;
        if(temporary2->next!=NULL)
        {
            temporary2->next->previous=new_node_at_random;
        }
        temporary2->next=new_node_at_random;
    }
    n=1;
    if(head_start==NULL)
    {
        printf("List is empty");
    }
    else
    {
        temporary=head_start;
        printf("\nAfter insertion of a node in the end, the doubly linked list is : \n");
        while(temporary!=NULL)
        {
            printf(" <= %d => ",temporary->data);
            n++;
            temporary=temporary->next;
        }
    }
    return 0;
}
