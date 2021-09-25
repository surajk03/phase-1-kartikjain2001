// This program will aim to insert a node between node temp1 and temp2

#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

void insert_new_node (int dt, struct node **head, struct node **temp2)
{
  struct node *middle;
  middle = (struct node *) malloc (sizeof (struct node));
  middle->data = dt;

  struct node *p;
  p = *head;

  while (p->next != *temp2)
    {
      p = p->next;
    }
  middle->next = p->next;
  p->next = middle;
}

void main ()
{
  struct node *head;
  struct node *temp;
  struct node *temp1;
  struct node *temp2;
  struct node *temp3;
  struct node *run;

  temp = (struct node *) malloc (sizeof (struct node));
  temp1 = (struct node *) malloc (sizeof (struct node));
  temp2 = (struct node *) malloc (sizeof (struct node));
  temp3 = (struct node *) malloc (sizeof (struct node));
  run = (struct node *) malloc (sizeof (struct node));

  temp->data = 12;
  temp->next = temp1;

  head = temp;

  temp1->data = 14;
  temp1->next = temp2;

  temp2->data = 13;
  temp2->next = temp3;

  temp3->data = 16;
  temp3->next = NULL;

  insert_new_node (19, &head, &temp2);

  run = head;

  while (run != NULL)
    {
      printf ("%d ", run->data);
      run = run->next;
    }


}
