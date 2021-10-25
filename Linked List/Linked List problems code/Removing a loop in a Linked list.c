#include <stdio.h>
#include <stdlib.h> /* is included because malloc is a library function and will show warning if this is not included */
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
    struct node* temp3 = NULL;
    struct node* temp4 = NULL;
    struct node* temp5 = NULL;
    
    struct node* fast;
    struct node* slow;
    
    struct node* run;
    
    
    
    temp = (struct node*)malloc(sizeof(struct node));
    temp1 = (struct node* )malloc(sizeof(struct node));
    temp2 = (struct node* )malloc(sizeof(struct node));
    
    temp3 = (struct node* )malloc(sizeof(struct node));
    
    temp4 = (struct node* )malloc(sizeof(struct node));
    
    temp5 = (struct node* )malloc(sizeof(struct node));
    
    temp -> data = 10;
    temp -> next = temp1;
    
    head = temp;
    
    temp1 -> data = 14;
    temp1 -> next = temp2;
    
    temp2 -> data = 22;
    temp2 -> next = temp3;
    
    
    temp3 -> data = 42;
    temp3 -> next = temp4;
    
    temp4 -> data = 4;
    temp4 -> next = temp5;
    
    temp5 -> data = 54;
    temp5 -> next = temp2;
    
    fast = head;
    slow = head;
    run = head;



while (fast != NULL || slow != NULL)
{
    fast = fast -> next -> next;
    slow = slow -> next;
    
    if (fast == slow)
    {
        printf ("There is a loop in the linked list\n");
        fast = head;
    while (fast != NULL || slow != NULL)
    {
        fast = fast -> next;
        slow = slow -> next;
        
        if (fast == slow)
        {
            while (fast != NULL || slow != NULL)
            {
            fast = fast -> next;
            if (fast -> next == slow)
            {
                fast -> next = NULL;
                break;
            }
            
            }
            break;
        }
    }
        
        break;
    }
    
    
}

run = head;

while (run != NULL)
{
    printf ("%d ", run -> data);
    run = run -> next;
}


    
    
    
}
