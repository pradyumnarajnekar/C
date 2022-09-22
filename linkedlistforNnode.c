// C program to create a singly linked list for N node

#include<stdio.h>
#include<stdlib.h>

struct node
{
   int num;
   struct node *link;
};
int main ()
{
   struct node *node1, *node2, *temp, *head;
   int n;
   printf("Linked List : To create and Display Singly Linked List : \n\n");
   
   printf("Input the number of nodes :");
   scanf("%d", &n);
   
   int num, i;
   node1 = malloc(sizeof(struct node));
   
   if(node1 == NULL)
   {
      printf("Memory can not be allocated \n");
   }
   else
   {
      printf("Input data for node 1 : \n");
      scanf("%d", &num);
      
      node1->num = num;
      node1->link = NULL;
      head = node1;
      temp = head;
      
      for(i=2; i<=n; i++)
      {
         node2 = malloc(sizeof(struct node));
         
         if(node2 == NULL)
         {
            printf("Memory can not be allocated\n");
            break;
         }
         else
         {
            printf("Input data for node %d : \n", i);
            scanf("%d", &num);
            
            node2-> num = num;
            node2-> link = NULL;
            temp-> link = node2;
            temp = temp -> link;
         }
      }
   }
   printf("\n Data entered in the list : \n");
   if(head == NULL)
   {
      printf("List is Empty \n");
   }
   else
   {
      temp = head;
      
      while(temp != NULL)
      {
         printf("%d -> ", temp->num);
         temp = temp -> link;
      }
   }
   return 0;
}
