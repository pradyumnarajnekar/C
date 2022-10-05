//Traversing Singly Circular Linked List
#include <stdio.h>
#include <stdlib.h>
struct node 
{
   int data;
   struct node *next;
};
int main()
{
   struct node *head_start, *node1, *temporary1, *temporary2;
   int n, data, i;
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
   return 0;
}
