#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
int main()
{
    struct node *head, *node1, *temporary1, *temporary2, *temporary3, *temporary4;
    int n, i, data;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    if(n>=1)
    {
        head=(struct node *) malloc(sizeof(struct node));
        printf("\nEnter the data of node 1 : ");
        scanf("%d",&data);
        head->data=data;
        head->next=NULL;
        temporary1=head;
        for(i=2;i<=n;i++)
        {
            node1=(struct node *) malloc(sizeof(struct node));
            printf("\nEnter the data of node %d : ",i);
            scanf("%d",&data);
            node1->data=data;
            node1->next=NULL;
            temporary1->next=node1;
            temporary1=node1;
        }
        temporary1->next=head;
    }
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        temporary4=head;
        printf("\nThe data entere in the list is : \n");
        do
        {
            printf("%d => ",temporary4->data);
            temporary4=temporary4->next;
            n++;
        }
        while(temporary4!=head);
    }
    temporary2=head;
    while(temporary2->next!=head)
    {
        temporary3=temporary2;
        temporary2=temporary2->next;
    }
    temporary3->next=head;
    free(temporary2);
    n=1;
    if(head==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temporary4=head;
        printf("\nAfter deleting node from the end, the circular linked list is : \n");
        do
        {
            printf("%d => ",temporary4->data);
            temporary4=temporary4->next;
            n++;
        }
        while(temporary4!=head);
    }
    return 0;
}
