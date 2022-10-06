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
    struct node *head_start, *tail_end, *node, *temporary, *temporary2;
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
    printf("\nEnter the positions from which node has to be deleted.");
    scanf("%d", &position);
    temporary2=head_start;
    for(i=1; i<=position; i++);
    {
        temporary2=temporary2->next;
    }
    if(temporary2!=NULL)
    {
        temporary2->previous->next=temporary2->next;
        temporary2->next->previous=temporary2->previous;
        free(temporary2);
    }
    n=1;
    if(head_start==NULL)
    {
        printf("List is empty");
    }
    else
    {
        temporary=head_start;
        printf("\nAfter deletion of a node in the end, the doubly linked list is : \n");
        while(temporary!=NULL)
        {
            printf(" <= %d => ",temporary->data);
            n++;
            temporary=temporary->next;
        }
    }
    return 0;
}
