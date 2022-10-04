#include<stdio.h>
#include<stdlib.h>//necessary header file for structures, further linked lists
struct node//initialising node for the linked list
{
   int data;//data part
   struct node *next;//link part
};
int main ()
{
   struct node *node1, *node2, *new_node_at_end, *temporary1, *temporary2, *head_start;
   int n, new_data_for_new_node;
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
      temporary1 = head_start;
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
            temporary1-> next = node2;
            temporary1 = temporary1 -> next;
         }
      }
   }//here the list is created which can be checked by traversing or printing the list
   printf("Data entered in the list : \n");//this is actually traversing of list
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
   printf("Inserting Node at the end of the list\n");
   printf("Enter data for the new node to be inserted\n");
   scanf("%d", &new_data_for_new_node);
   new_node_at_end = (struct node*)malloc(sizeof(struct node));
   if(new_node_at_end == NULL)
   {
      printf("List cannot be created");
   }
   else
   {
      new_node_at_end->data = new_data_for_new_node;
      new_node_at_end->next = NULL;
      temporary2 = head_start;
      while(temporary2 != NULL && temporary2->next != NULL)
      temporary2 = temporary2 -> next;
      temporary2 -> next = new_node_at_end;
   }
   printf("After the insertion of the node at beginning, the list is \n");//printing the new list with a node inserted at the last
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
   return 0;
}
