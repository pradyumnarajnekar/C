#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
int main()
{
    struct node *node1, *head_start, *temprary;
    int n, m,i, data, old_data, new_data ;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    if(n>=1)
    {
        head_start= (struct node *) malloc(sizeof(struct node));
        printf("\nEnter the data for node 1 : ");
        scanf("%d",&data);
        head_start->data=data;
        head_start->next=NULL;
        temprary=head_start;
        for(i=2;i<=n;i++)
        {
            node1= (struct node *) malloc(sizeof(struct node));
            printf("Enter the data for node %d : ",i);
            scanf("%d",&data);
            node1->data=data;
            node1->next=NULL;
            temprary->next=node1;
            temprary=node1;
        }
        temprary->next=head_start;
    }
    n=1;
    temprary=head_start;
    printf("\nThe data entered in the list is : \n");
    do
    {
        printf("%d => ",temprary->data);
        temprary=temprary->next;
        n++;
    }
    while(temprary!=head_start);
    printf("\n\nEnter the data that need to be updated : ");
    scanf("%d",&old_data);
    temprary=head_start;
    while(temprary->next!=head_start)
    {
        if(temprary->data==old_data)
        {
            printf("Enter the updated data : ");
            scanf("%d",&new_data);
            temprary->data=new_data;
        }
        else
        {
            m =m+1;
            temprary=temprary->next;
        }
    }
    n=1;
    temprary=head_start;
    printf("\nAfter updation, the circular singly linked list is : \n");
    do
    {
        printf("%d => ",temprary->data);
        temprary=temprary->next;
        n++;
    }
    while(temprary!=head_start);
    return 0;
}
