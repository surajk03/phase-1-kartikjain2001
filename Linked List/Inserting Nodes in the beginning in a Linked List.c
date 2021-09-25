#include <stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};


void insert_new_node (int dt, struct node **head)
{
  struct node *ptr;
  ptr = (struct node *) malloc (sizeof (struct node));
  ptr->data = dt;
  ptr->next = *head;
  *head = ptr;

}

void main ()
{
  struct node *head;
  struct node *temp;
  struct node *temp1;
  struct node *temp2;
  struct node *run;

  temp = (struct node *) malloc (sizeof (struct node));
  temp1 = (struct node *) malloc (sizeof (struct node));
  temp2 = (struct node *) malloc (sizeof (struct node));
  run = (struct node *) malloc (sizeof (struct node));


  temp->data = 11;
  temp->next = temp1;
  head = temp;

  temp1->data = 13;
  temp1->next = temp2;

  temp2->data = 17;
  temp2->next = NULL;

  insert_new_node (5, &head);


  run = head;
  while (run != NULL)
    {
    printf ("%d\n", run->data);
      run = run->next;
      
    }
}
