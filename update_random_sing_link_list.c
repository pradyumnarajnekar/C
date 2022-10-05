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
   int n, m, x, data, i, data_update;
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
   printf("\nUpdating the data\n");
   printf("Enter the number of node to be updated\n");
   scanf("%d", &x);
   printf("Enter the new updated data\n");
   scanf("%d", &data_update);
   m=0;
   temporary1 = head_start;
   while(temporary1!=NULL)
   {
      if(temporary1->data==x)
      {
         temporary1->data=data_update;
      }
      else
      {
         m=m+1;
         temporary1=temporary1->next;
      }
   }
   printf("\nAfter deletion, the linked list : \n");
   temporary1 = head_start;
   while(temporary1 != NULL)
   {
     printf("%d => ", temporary1->data); 
     temporary1= temporary1->next; 
   }
   return 0;
}
