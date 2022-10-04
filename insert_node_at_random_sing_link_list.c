#include <stdio.h>
#include <stdlib.h>
struct node 
{
 int data;
 struct node *next;
};
int main()
{
 struct node *node1, *head_start, *new_node_at_random, *temporary1, *temporary2, *temporary3;
 int n, x, data, i, new_data_for_new_node;
 printf("Enter the number of nodes : ");
 scanf("%d", &n);
 head_start = (struct node *)malloc(sizeof(struct node));
 if(head_start == NULL) 
 {
 printf("list cannot be created\n");
 }
 else
 {
 printf("Enter data for node 1 : \n");
 scanf("%d", &data);
 head_start->data = data; 
 head_start->next = NULL; 
 temporary1 = head_start;
 for(i=2; i<=n; i++)
 {
 node1 = (struct node *)malloc(sizeof(struct node));
 if(node1 == NULL)
 {
 printf("List is empty\n");
 break;
 }
 else
 {
    printf("Enter data of the node %d : \n", i);
    scanf(" %d", &data);
    node1->data = data;
    node1->next = NULL; 
    temporary1->next = node1; 
    temporary1 = temporary1->next; 
 }
 }
 }
 printf("The entered list is :\n");
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
 printf("\nEnter the number at which new node is to be inserted \n");
 scanf("%d",&x);
 printf("Enter the data to be entered in new node : \n");
 scanf("%d",&new_data_for_new_node);
 new_node_at_random=malloc(sizeof(struct node));
 new_node_at_random->data=new_data_for_new_node;
 temporary2=head_start;
 while(temporary2->data!=x)
 {
 temporary3=temporary2;
 temporary2=temporary2->next;
 }
 new_node_at_random->next=temporary2;
 temporary3->next=new_node_at_random;
 printf("After insertion of the new node at %d position, the linked list is \n", x);
 temporary1 = head_start;
 while(temporary1 != NULL)
 {
 printf("%d => ", temporary1->data); 
 temporary1 = temporary1->next; 
 }
 temporary1->next=new_node_at_random;
 return 0;
}
