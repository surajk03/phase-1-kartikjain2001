```
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};

void main ()
{
    struct node* head = NULL;
    struct node* temp = NULL;
    struct node* temp1 = NULL;
    struct node* temp2 = NULL;
    
    temp = (struct node*)malloc(sizeof(struct node));
    temp1 = (struct node* )malloc(sizeof(struct node));
    temp2 = (struct node* )malloc(sizeof(struct node));
    
    temp -> data = 10;
    temp -> next = temp1;
    temp1 -> data = 14;
    temp1 -> next = temp2;
    temp2 -> data = 22;
    temp2 -> next = NULL;
    
    printf("Value stored in data of node1 is '%d' and the data field 'next' stores '%d' which is the address of next node linking them.\n", temp -> data , temp -> next);
    printf ("Value stored in data of node2 is '%d' and the data field 'next' stores '%d' which is the address of next node linking them.\n", temp1 -> data , temp1 -> next);
    printf ("Value stored in data of node3 is '%d' and the data field 'next' stores '%d' which marks the end of the linked list", temp2 -> data , temp2 -> next);
    
}
```
