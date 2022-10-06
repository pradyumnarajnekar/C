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
    struct node *head_start, *tail_end, *node, *temporary, *new_node_at_front;
    int n, i, num, new_data_for_new_node;
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
    printf("\nEnter the data for new node : ");
    scanf("%d",&new_data_for_new_node);
    new_node_at_front->data=new_data_for_new_node;
    new_node_at_front->next=head_start;
    new_node_at_front->previous=NULL;
    head_start->previous=new_node_at_front;
    head_start=new_node_at_front;
    n=1;
    if(head_start==NULL)
    {
        printf("List is empty");
    }
    else
    {
        temporary=head_start;
        printf("\nAfter insertion of a node in the front, the doubly linked list is : \n");
        while(temporary!=NULL)
        {
            printf(" <= %d => ",temporary->data);
            n++;
            temporary=temporary->next;
        }
    }
    return 0;
}
