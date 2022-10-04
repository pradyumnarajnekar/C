#include <stdio.h>
#include <stdlib.h>
struct node 
{
   int data;
   struct node *next;
};
int main()
{
   struct node *head_start, *node1, *temporary1, *temporary2, *temporary3;
   int n, x, data, i;
    printf("Enter the number of nodes : ");
   scanf("%d", &n);
   head_start = (struct node *)malloc(sizeof(struct node));
   if(head_start == NULL) 
   {
      printf("List cannot be created\n");
   }
   else
   {
      printf("\nEnter the data for node 1 : ");
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
            printf("\nEnter the data for node %d : ", i);
            scanf(" %d", &data);
            node1->data = data;
            node1->next = NULL;
            temporary1->next = node1; 
            temporary1 = temporary1->next; 
         }
      }
   }
   printf("Data entered in the list : \n");
   if(head_start == NULL)
   {
      printf("List is Empty\n");
   }
   else
   {
      temporary1 = head_start;
      while(temporary1 != NULL)
      {
         printf("%d => ", temporary1->data);
         temporary1 = temporary1 -> next;
      }
   }
   printf("Deleting the node at random\n");
   printf("Enter the number of node to be deleted\n");
   scanf("%d", &x);
   temporary2=head_start;
   while(temporary2->data!=x)
   {
      temporary3=temporary2;
      temporary2=temporary2->next;
   }
   temporary3->next=temporary2->next;
   free(temporary2);
   printf("\nAfter deletion, the linked list : \n");
   temporary1 = head_start;
   while(temporary1 != NULL)
   {
     printf("%d => ", temporary1->data); 
     temporary1= temporary1->next; 
   }
   return 0;
}
