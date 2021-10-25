#include <stdio.h>
#include <stdlib.h> /* is included because malloc is a library function and will show warning if this is not included */
struct node
{
    int data;
    struct node* next;
};

void main ()
{
    int key;
    int i;
    struct node* head = NULL;
    struct node* temp = NULL;
    struct node* temp1 = NULL;
    struct node* temp2 = NULL;
    struct node* temp3 = NULL;
    struct node* temp4 = NULL;
    struct node* temp5 = NULL;

    struct node* left;
    struct node* right;
    struct node* current;


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
    temp5 -> next = NULL; //This is the point where we created a loop in the Linked List


    run = head;

    while (run != NULL)
    {
        printf ("%d ", run -> data);
        run = run -> next;
    }

    printf ("\n");

    printf ("Enter the key from where the linked list should be reversed: ");
    scanf ("%d", &key);


    left = NULL;
    right = NULL;
    current = head;
    i = 0;

while (i != 3)
{
    right = current -> next;
    current -> next = left;
    left = current;
    current = right;

    i++;
}

i = 3;
head = left;
run = head;



left = NULL;




while (i != 6)
{
    right = current -> next;
    current -> next = left;
    left = current;
    current = right;

    i++;

}

run = head;

while (run -> next != NULL)
{
   run = run -> next;
}
run -> next = left;

run = head;

while (run != NULL)
    {
        printf ("%d ", run -> data);
        run = run -> next;
    }


}
