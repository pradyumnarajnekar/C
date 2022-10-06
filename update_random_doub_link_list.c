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
    struct node *head_start, *tail_end, *temporary, *temporary2;
    int n, data, x = 0, new_data, old_data;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    if(n>=1)
    {
        head_start= (struct node*) malloc(sizeof(struct node));
        if(head_start!=NULL)
        {
            printf("\nEnter the data for the node 1 : ");
            scanf("%d",&data);
            head_start->data=data;
            head_start->previous=NULL;
            head_start->next=NULL;
            tail_end=head_start;
            for(int i=2;i<=n;i++)
            {
                temporary=(struct node*)malloc(sizeof(struct node));
                if(temporary!=NULL)
                {
                    printf("\nEnter the data for the node %d : ",i);
                    scanf("%d",&data);
                    temporary->data=data;
                    temporary->previous=tail_end;
                    temporary->next=NULL;
                    tail_end->next=temporary;
                    tail_end=temporary;
                }
                else
                {
                    printf("\nList is empty");
                    break;
                }
            }
        }
        else
        {
            printf("\nList is empty");
        }
    }
    n=1;
    if(head_start==NULL)
    {
        printf("List is empty");
    }
    else
    {
        temporary2=head_start;
        printf("\nThe data entered in the list : \n");
        while(temporary2!=NULL)
        {
            printf("<= %d => ",temporary2->data);
            n++;
            temporary2=temporary2->next;
        }
    }
    printf("\nEnter the data that need to be updated in the list : "); 
    scanf("%d",&old_data);
    temporary = head_start;
    while(temporary != tail_end)
    {
        if(temporary -> data == old_data)
        {
            printf("\nEnter the new data : ");
            scanf("%d",&new_data);
            temporary -> data = new_data; 
        }
        else
        {
            x = x + 1;
            temporary = temporary -> next;
        }
    }
    n=1;
    if(head_start==NULL)
    {
        printf("List is empty");
    }
    else
    {
        temporary2=head_start;
        printf("\nAfter updation, the doubly linked list is : \n");
        while(temporary2!=NULL)
        {
            printf("<= %d => ",temporary2->data);
            n++;
            temporary2=temporary2->next;
        }
    }
    return 0;
}
