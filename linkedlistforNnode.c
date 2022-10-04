// C program to create a singly linked list for N node

#include<stdio.h>
#include<stdlib.h>//necessary header file for structures, further linked lists
struct node//initialising node for the linked list
{
   int data;//data part
   struct node *next;//link part
};
int main ()
{
   struct node *node1, *node2, *temporary, *head_start;
   int n;
   printf("Input the number of nodes :");
   scanf("%d", &n);
   int data, i;
   node1 = malloc(sizeof(struct node));// memory allocation for the node
   if(node1 == NULL)
   {
      printf("List cannot be created\n");
   }
   else
   {
      printf("Input data for node 1 : \n");
      scanf("%d", &data);
      node1->data = data;
      node1->next = NULL;
      head_start = node1;
      temporary = head_start;
      for(i=2; i<=n; i++)
      {
         node2 = malloc(sizeof(struct node));// memory allocation for the node
         
         if(node2 == NULL)
         {
            printf("List cannot be created\n");
            break;
         }
         else
         {
            printf("Input data for node %d : \n", i);
            scanf("%d", &data);
            
            node2-> data = data;
            node2-> next = NULL;
            temporary-> next = node2;
            temporary = temporary -> next;
         }
      }
   }// here the linked list creation is over but to see it working you need to traverse it
   printf("Data entered in the list : \n"); // traversing
   if(head_start == NULL)
   {
      printf("List is Empty\n");
   }
   else
   {
      temporary = head_start;
      
      while(temporary != NULL)
      {
         printf("%d => ", temporary->data);
         temporary = temporary -> next;
      }
   }
   return 0;
}
