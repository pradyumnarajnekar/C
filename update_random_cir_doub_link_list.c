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
    struct node *head_start, *node1, *temporary1, *temporary2, *temporary3;
    int n, i, data, old_data, x = 0, new_data;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    if(n>=1)
    {
        head_start=(struct node *) malloc(sizeof(struct node));
        printf("\nEnter the data for node 1 : ");
        scanf("%d", &data);
        head_start->data=data;
        head_start->next=head_start;
        head_start->previous=head_start;
        temporary1=head_start;
        for(i=2;i<=n;i++)
        {
            node1=(struct node *)malloc(sizeof(struct node));
            printf("\nEnter the data for node %d : ",i);
            scanf("%d", &data);
            node1->data=data;
            node1->next=head_start;
            node1->previous=temporary1;
            temporary1->next=node1;
            temporary1=node1;
        }
        temporary1->next=head_start;
    }
    n=1;
    temporary3=head_start;
    printf("\nThe data entered in the list : \n");
    do
    {
        printf(" <= %d => ",temporary3->data);
        temporary3=temporary3->next;
        n++;
    }
    while(temporary3!=head_start);
    printf("\nEnter the data that need to be updated : "); 
    scanf("%d", &old_data);
    temporary2 = head_start;
    while(temporary2 != temporary1)
    {
        if(temporary2 -> data == old_data)
        {
            printf("\nEnter the updated data : ");
            scanf("%d", &new_data);
            temporary2 -> data = new_data; 
        }
        else
        {
            x = x + 1;
            temporary2 = temporary2 -> next;
        }
    }
    n=1;
    temporary3=head_start;
    printf("\nAfter updation, the circular double linked list is : \n");
    do
    {
        printf(" <= %d => ",temporary3->data);
        temporary3=temporary3->next;
        n++;
    }
    while(temporary3!=head_start);
    return 0;
}
