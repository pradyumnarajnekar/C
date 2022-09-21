#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node * first, *second, * third, * fourth;

    first=(struct node *) malloc(sizeof(struct node));
    second=(struct node *) malloc(sizeof(struct node));
    third=(struct node *) malloc(sizeof(struct node));
    fourth=(struct node *) malloc(sizeof(struct node));

    first ->data =5;
    first->next= second;

    second ->data =8;
    second ->next=third;
      
    third -> data =9;
    third ->next = fourth;

    fourth->data=10;
    fourth->next=NULL;

    while(first!=NULL){
    printf("%d \n",first->data);
    first=first->next;
    }

    return 0;
}
