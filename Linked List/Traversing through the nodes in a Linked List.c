#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node* next;
};

void linked_list_traversal(struct node* run)
{

while (run != NULL)
{
    printf ("%d ", run -> data);
    run = run -> next;
}
}

void main()
{
    struct node* head;
    struct node* temp;
    struct node* temp1;
    struct node* temp2;
    
    temp = (struct node* )malloc(sizeof(struct node));
    temp1 = (struct node* )malloc(sizeof(struct node));
    temp2 = (struct node* )malloc(sizeof(struct node));
    
    temp -> data = 12;
    temp -> next = temp1;
    
    head = temp;
    
    temp1 -> data = 14;
    temp1 -> next = temp2;
    
    temp2 -> data = 16;
    temp2 -> next = NULL;
    
    linked_list_traversal(head);
}
