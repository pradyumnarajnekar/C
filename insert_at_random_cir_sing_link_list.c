//Insert at the random of Singly Circular Linked List
#include <stdio.h>
#include <stdlib.h>
struct node 
{
   int data;
   struct node *next;
};
int main()
{
   struct node *head_start, *node1, *new_node_at_random, *temporary1, *temporary2, *temporary3;
   int n, x, data, new_data_for_new_node,  i;
    printf("Enter the number of nodes : ");
   scanf("%d", &n);
   head_start = (struct node *)malloc(sizeof(struct node));
   if(head_start == NULL) 
   {
      printf("List cannot be created\n");
   }
   else
   {
      for(i=2; i<=n; i++)
      {
         node1 = (struct node *)malloc(sizeof(struct node));
         if(node1 == NULL)
         {
            printf("List cannot be created\n");
            break;
         }
         else
         {
            printf("Enter the data for node %d : ", i);
            scanf(" %d", &data);
            node1->data = data;
            node1->next = NULL;
            temporary1->next = node1; 
            temporary1 = node1; 
         }
         temporary1->next=head_start;
      }
   }
   printf("\nData entered in the circular list : \n");
   n = 1;
   if(head_start == NULL)
   {
      printf("List is Empty\n");
   }
   else
   {
      temporary2 = head_start;
      do
      {
         printf("%d => ", temporary2->data);
         temporary2 = temporary2 -> next;
         n++;
      }while(temporary2!=head_start);
   }
   printf("\n\nInserting a new node at the random of the circular singly linked list\n");
   printf("\nEnter the number of node at which a new node is to be inserted : ");
   scanf("%d", &x);
   printf("\nEnter the data for new node:");
   scanf("%d",&new_data_for_new_node);
   new_node_at_random = malloc(sizeof(struct node));
   new_node_at_random->data=new_data_for_new_node;
   temporary3=head_start;
   for(n=2; n<=x; n++)
   {
      temporary1=temporary1->next;
   }
   new_node_at_random->next=temporary1->next; 
   temporary1->next=new_node_at_random;
   printf("\n After inserting a new node at random, the circular list : \n");
   n = 1;
   if(head_start == NULL)
   {
      printf("List is Empty\n");
   }
   else
   {
      temporary2 = head_start;
      do
      {
         printf("%d => ", temporary2->data);
         temporary2 = temporary2 -> next;
         n++;
      }while(temporary2!=head_start);
   }
   return 0;
}
