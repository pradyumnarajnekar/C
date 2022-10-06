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
    struct node *head_start, *node1,*temporary1, *temporary2, *temporary3, *temporary4;
    int n, i, data;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    if(n>=1)
    {
        head_start=(struct node *) malloc(sizeof(struct node));
        printf("Enter the data for node 1 : ");
        scanf("%d",&data);
        head_start->data=data;
        head_start->next=head_start;
        head_start->previous=head_start;
        temporary1=head_start;
        for(i=2;i<=n;i++)
        {
            node1=(struct node *)malloc(sizeof(struct node));
            printf("Enter the data for node %d : ",i);
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
    temporary4=head_start;
    printf("\nThe data entered in the list is : \n");
    do
    {
        printf(" <= %d =>",temporary4->data);
        temporary4=temporary4->next;
        n++;
    }
    while(temporary4!=head_start);
    temporary2=temporary1;
    temporary1=temporary1->previous;
    temporary1->next=head_start;
    free(temporary2);
    n=1;
    temporary4=head_start;
    printf("\nAfter deletion from the end, the circular doubly linked list is : \n");
    do
    {
        printf(" <= %d =>",temporary4->data);
        temporary4=temporary4->next;
        n++;
    }
    while(temporary4!=head_start);
    return 0;
}
