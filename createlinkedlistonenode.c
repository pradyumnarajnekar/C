// C program to create a singly linked list of one node

#include<stdio.h>
#include<stdlib.h>
struct node
{
   int num;
   struct node *link;
};
int main()
{
   struct node *node1, *head, *temp;
   int num;
   
   node1 = malloc(sizeof(struct node));
   
   printf("Input data for node 1 : \n");
   scanf("%d", &num);
   
   node1-> num = num;
   node1-> link = NULL;
   head = node1;
   
   if (head == NULL)
   {
      printf("The list is empty\n");
   }
   else
   {
      temp = head;
      while(temp != NULL)
      {
         printf("%d \n", temp->num);
         temp = temp -> link;
      }
   }
}
