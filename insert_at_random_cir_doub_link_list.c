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
    struct node *head_start, *node1, *temporary1, *new_node_at_random, *temporary2, *temporary3;
   int n, i, data, new_data_for_new_node, position;
   printf("Enter the number of nodes : ");
   scanf("%d",&n);
   if(n>=1)
   {
     head_start=(struct node *)malloc(sizeof(struct node));
     printf("\nEnter the data for node 1 : ");
     scanf("%d",&data);
     head_start->data=data;
     head_start->next=head_start;
     head_start->previous=head_start;
     temporary1=head_start;
     for(i=2; i<=n; i++)
     {
         node1=(struct node *)malloc(sizeof(struct node));
         printf("Enter the data for node %d : ",i);
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
     printf("\nThe data entered in the list is : \n");
     do
     {
         printf(" <= %d => ",temporary3->data);
         temporary3=temporary3->next;
         n++;
     }
         while(temporary3!=head_start);
         printf("\nEnter the position at which new node to be added : ");
         scanf("%d", &position);
         printf("\nEnter the data for new node to be inserted : ");
         scanf("%d", &new_data_for_new_node);
         new_node_at_random=(struct node *)malloc(sizeof(struct node));
         temporary2=head_start;
         while(i<position-1 && temporary2!=NULL)
         {
             temporary2 = temporary2->next;
             i++;
         }
         if(temporary2!=NULL)
         {
             new_node_at_random=(struct node *)malloc(sizeof(struct node));
             new_node_at_random->data=new_data_for_new_node;
             new_node_at_random->next=temporary2->next;
             new_node_at_random->previous=temporary2;
             if(temporary2->next!=head_start)
             {
                temporary2->next->previous=new_node_at_random;
             }
               temporary2->next=new_node_at_random;
          }
         n=1;
         temporary3=head_start;
         printf("\nafter insertion, the circular doubly linked list is : \n");
         do
         {
             printf(" <= %d => ",temporary3->data);
             temporary3=temporary3->next;
             n++;
          }
           while(temporary3!=head_start);
           return 0;
}
