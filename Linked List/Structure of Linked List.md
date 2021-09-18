# Basics of Linked List 📚
A Linked List is a [Linear Data Structue](https://www.upgrad.com/blog/what-is-linear-data-structure/#:~:text=It%20is%20a%20type%20of,single-level%20storage%20of%20data.) in which elements are stored in a non-contigous manner.

Each element is stored in a separate **Node** and each node is linked to another node via a **link**.

## Node 🗃️
A node is a structure in which there are two sub - elements or fields.

Ist field stores the data which we want to enter in the node.
IInd node is a pointer which points to the entire next node.

![ll1](https://user-images.githubusercontent.com/74143496/133787112-e2782737-fcdc-46c8-a3d9-b3c290a5bcc4.png)

It is advised to study and revise two concepts to understand Linked List easily 📝
* [Dynamic Memory Allocation](https://github.com/cleanhand/phase-1-kartikjain2001/blob/main/Linked%20List/Dynamic%20Memory%20Allocation%20functions.md)
* [Structures](https://github.com/cleanhand/phase-1-kartikjain2001/blob/main/Linked%20List/Structures.md)

## Structure of a Node 🏗️

As we read earlier that node comprises of two fields which stores the data of the element and address of next node respectively.

We can use the concept of structures to define a node.
```
struct node
{
    int data;
    struct node* next;
    
    /*   next is a pointer which points to the entire next node and thus, the type will be the same of the next node which is struct node   */
}

```
## Steps to define a Linked List  📃
* We create a structure to define a node.
* In the main function , we declare all nodes as pointer variable of type *struct node**.
* We allocate memory to each node using malloc function of size *struct node* and typecast them to type *struct node** .
* Store data in each node's data.
* Store the address of next node in each node's next.
* Make sure to link the last node's next to NULL and store address of first node in head. This will mark the ending and beginning of the Linked List respectively.

## A simple Code to create a Linked List of 3 nodes 🖥️

```
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
    
    temp = (struct node*)malloc(sizeof(struct node));
    temp1 = (struct node* )malloc(sizeof(struct node));
    temp2 = (struct node* )malloc(sizeof(struct node));
    
    temp -> data = 10;
    temp -> next = temp1;
    head = temp;
    temp1 -> data = 14;
    temp1 -> next = temp2;
    temp2 -> data = 22;
    temp2 -> next = NULL;
    
    printf("Value stored in data of node1 is '%d' and the data field 'next' stores '%d' which is the address of next node linking them.\n", temp -> data , temp -> next);
    printf ("Value stored in data of node2 is '%d' and the data field 'next' stores '%d' which is the address of next node linking them.\n", temp1 -> data , temp1 -> next);
    printf ("Value stored in data of node3 is '%d' and the data field 'next' stores '%d' which marks the end of the linked list", temp2 -> data , temp2 -> next);
    
}
```
