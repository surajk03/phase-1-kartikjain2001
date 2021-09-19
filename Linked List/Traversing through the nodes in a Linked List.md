```
#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

void main ()
{
  struct node *head = NULL;
  struct node *temp = NULL;
  struct node *temp1 = NULL;
  struct node *temp2 = NULL;

  struct node *run = NULL;

  temp = (struct node *) malloc (sizeof (struct node));
  temp1 = (struct node *) malloc (sizeof (struct node));
  temp2 = (struct node *) malloc (sizeof (struct node));
  run = (struct node *) malloc (sizeof (struct node));

  temp->data = 10;
  temp->next = temp1;
  head = temp;

  temp1->data = 12;
  temp1->next = temp2;

  temp2->data = 22;
  temp2->next = NULL;

  run->next = head;

  while (run != NULL)
    {
      run = run->next;
      printf ("%d\n", run->data);
    }
}
```


