#include <stdio.h>
#include <stdlib.h>

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
    struct node *temp3;
    struct node *temp4;
    struct node *temp5;
    
    struct node *left;
    struct node *current;
    struct node *right;
    
    struct node *run;
    
     temp = (struct node* )malloc(sizeof(struct node));
    temp1 = (struct node* )malloc(sizeof(struct node));
    temp2 = (struct node* )malloc(sizeof(struct node));
    temp3 = (struct node* )malloc(sizeof(struct node));
    temp4 = (struct node* )malloc(sizeof(struct node));
    temp5 = (struct node* )malloc(sizeof(struct node));
    
    temp -> data = 1;
    temp -> next = temp1;
    
    head = temp;
    
    temp1 -> data = 2;
    temp1 -> next = temp2;
    
    temp2 -> data = 3;
    temp2 -> next = temp3;
    
    temp3 -> data = 3;
    temp3 -> next = temp4;
    
    temp4 -> data = 2;
    temp4 -> next = temp5;
    
    temp5 -> data = 1;
    temp5 -> next = NULL;
    
    left = NULL;
    current = temp3;
    right = NULL;
    
    while(current != NULL)
    {
        run = current -> next;
        current -> next = left;
        left = current;
        current = right;
    }
    
    temp2 -> next = temp5;
    
    
    
    run = head;
    
    while (run != NULL)
    {
        printf ("%d ", run -> data);
        run = run -> next;
    }
    
    
    
    
    
    
    
    
    
}
