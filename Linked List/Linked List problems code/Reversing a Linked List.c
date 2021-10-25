#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

void main()
{
  struct node *head;
  struct node *temp;
  struct node *temp1;
  struct node *temp2;
  struct node *left;
  struct node *current;
  struct node *right;
  struct node *run;
  
  
  temp = (struct node* )malloc(sizeof(struct node));
  temp1 = (struct node* )malloc(sizeof(struct node));
  temp2 = (struct node* )malloc(sizeof(struct node));
  
  
  
  temp -> data = 11;
  temp -> next = temp1;
  
  head = temp;
  
  temp1 -> data = 14;
  temp1 -> next = temp2;
  
  temp2 -> data = 16;
  temp2 -> next = NULL;
  
  left = NULL;
  current = temp;
  right = NULL;
  
  while (current != NULL)
  {    right = current -> next;
      current ->next = left;
      left = current;
      current = right;
      
  }
  head = left;
  
  run = head;
  
  while(run != NULL)
  {
      printf ("%d ", run -> data);
      run = run -> next;
  }
  
}
