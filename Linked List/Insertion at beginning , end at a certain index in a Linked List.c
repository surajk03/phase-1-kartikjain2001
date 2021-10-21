#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};



void traverse_linked_list(struct node* run)
{
    while (run != NULL)
    {
        printf ("%d ", run -> data);
        run = run -> next;
    }
    printf ("\n\n");
}

void insert_at_beg(struct node **head , int dt)
{
    struct node* ptr;
    ptr = (struct node* )malloc(sizeof(struct node));
    ptr -> data = dt;
    ptr -> next = *head;
    
    *head = ptr;
}

void insert_at_end(struct node **head , int dt)
{
    struct node* ptr;
    struct node* p;
    
    ptr = (struct node* )malloc(sizeof(struct node));
    
    p = *head;
    
    while (p -> next != NULL)
    {
        p = p -> next;
    }
    
    p -> next = ptr;
    ptr -> data = dt;
    
    ptr -> next = NULL;
}

void insert_at_middle(struct node **head , int dt , int index)
{
    int i = 0;
    struct node* ptr;
    ptr = (struct node* )malloc(sizeof(struct node));
    
    struct node* p;
    
    p = *head;
    
    while (i != index - 1)
    {
        p = p -> next;
        i++;
    }
    ptr -> data = dt;
    ptr -> next = p -> next;
    
    p -> next = ptr;
    
}

void main()
{
    struct node* head;
    struct node* temp;
    struct node* temp1;
    struct node* temp2;
    struct node* temp3;
    
    temp = (struct node* )malloc(sizeof(struct node));
    temp1 = (struct node* )malloc(sizeof(struct node));
    temp2 = (struct node* )malloc(sizeof(struct node));
    temp3 = (struct node* )malloc(sizeof(struct node));
    
    temp -> data = 12;
    temp -> next = temp1;
    
    head = temp;
    
    temp1 -> data = 15;
    temp1 -> next = temp2;
    
    temp2 -> data = 16;
    temp2 -> next = temp3;
    
    temp3 -> data = 10;
    temp3 -> next = NULL;
    
    printf ("The Linked List before any insertion is \n");
    
     traverse_linked_list(head);
    
    insert_at_beg(&head , 4);
    printf ("The Linked List after insertion at beginning is \n");
    
    traverse_linked_list(head);
    
    
    insert_at_end(&head , 20);
    
    printf ("The Linked List after insertion at the end is \n");
    
    traverse_linked_list(head);
    
    insert_at_middle(&head , 19 , 2);
    
    printf ("The Linked List after insertion between nodes 1 & 2 \n");
    
    traverse_linked_list(head);
    
    
    
    
}
