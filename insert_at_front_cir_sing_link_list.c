//Inserting in the beginning Singly Circular Linked List
#include <stdio.h>
#include <stdlib.h>
struct node 
{
   int data;
   struct node *next;
};
int main()
{
   struct node *head_start, *node1, *new_node_at_front, *temporary1, *temporary2, *temporary3;
   int n, data, new_data_for_new_node,  i;
    printf("Enter the number of nodes : ");
   scanf("%d", &n);
   head_start = (struct node *)malloc(sizeof(struct node));
   if(head_start == NULL) 
   {
      printf("List cannot be created\n");
   }
   else
   {
      printf("Enter the data for node 1 : ");
      scanf("%d", &data);
      head_start->data = data; 
      head_start->next = NULL; 
      temporary1 = head_start;
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
   printf("\nInserting a new node at the front of the circular singly linked list");
   printf("\nEnter the data for new node:");
   scanf("%d",&new_data_for_new_node);
   new_node_at_front = malloc(sizeof(struct node));
   new_node_at_front->data=new_data_for_new_node;
   new_node_at_front->next=head_start;
   temporary3=head_start;
   while(temporary3->next!=head_start)
   {
      temporary3=temporary3->next;
   }
   temporary3->next=new_node_at_front;
   head_start=new_node_at_front; 
   printf("\n After inserting a new node at front, the circular list : \n");
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
