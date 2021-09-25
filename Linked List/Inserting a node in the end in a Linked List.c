#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

void insert_new_node (int dt, struct node **head)
{
  struct node *end;
  end = (struct node *) malloc (sizeof (struct node));

  end->data = dt;
  struct node *p;
  p = *head;

  while (p->next != NULL)
    {
      p = p->next;
    }
  p->next = end;
  end->next = NULL;

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

  temp->data = 12;
  temp->next = temp1;

  head = temp;

  temp1->data = 14;
  temp1->next = temp2;

  temp2->data = 15;
  temp2->next = NULL;

  insert_new_node (18, &head);

  run = head;

  while (run != NULL)
    {
      printf ("%d ", run->data);
      run = run->next;

    }
}
