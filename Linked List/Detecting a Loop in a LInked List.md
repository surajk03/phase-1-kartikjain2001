# Question ❔

Detect if a loop is present in a given Linked List

## Approach 💡

> A linked list is said to be having a loop if when traversing , we start to get the same nodes again and in a rotated manner and due to which it never reaches NULL.

* To detect a loop in a linked list , we would use the **'Floyd's Cycle finding Algorithm'**.

 According to this Algorithm , we would be using two pointers namely , *fast 🐇* and *slow 🐢* pointer.
   * The **fast** pointer will traverse through the Linked List and as the name suggest , it will travel faster or will traverse two nodes at one time.
   * The **slow** pointer will also traverse through the Linked List and as the name suggests , it will travel slower or will traverse one node at a time.

> The Algorithm says that if both the pointers meet at a particular point / node (in linked list) , this proves that there is a loop in the give Linked List.

~~~
fast = head;
slow = head;

while (fast != NULL || slow != NULL)
{
    fast = fast -> next -> next;
    slow = slow -> next;
    
    if (fast == slow)
    {
        printf ("There is a loop in the linked list\n");
        break;
    }
}

~~~

## Code 💻

The solution code for the problem is given [here](https://github.com/cleanhand/phase-1-kartikjain2001/blob/main/Linked%20List/Detecting%20a%20Loop%20in%20a%20LInked%20List.c)

