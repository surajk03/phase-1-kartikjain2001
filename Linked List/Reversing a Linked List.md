# QUESTION ❔
Reverse ⏮️ a given Linked List and print the contents. 
# APPROACH 💡
We will use three pointers namely the **left** , **current** and **right** and use them in such a manner to execute the following steps.
* Reaching the first node.
* Breaking its **node ->next** link and connecting it to the previous one.
> In the case of first nore , the link will be connected to **NULL**.
* Reaching the next node and breaking its **node -> next** link and connecting it to previous node.
* Do this until we encounter **NULL**.
* Then point the **head** to the final node.

These steps will reverse the linked list and then we can traverse a pointer through the list and print the data of the reverse List.

## Using the three pointers ✳️

We need to account three things to reverse a Linked List.
1. We need to reach each node.
2. We need to break the link for the **node -> next** and connect it to the previous node.
3. We need to iterate to the next node 
> All these three steps need to be performed till we have connected the last node's next to its previous node.

So , all the three pointers mentioned will be used as follows
* The **current** pointer will point at the first node in the beginning and will traverse through each node , breaking the links.
* The **left** pointer will point to NULL in the beginning and will be always one node behind the node pointed by the current pointer , so that the node -> next at current pointer will connect to the previous node.
* The **right** pointer will point to NULL in the beginning and will always be one node ahead , the node pointed by the current pointer , so that the current pointer can traverse ahead.


# Code 🖥️
A simple code for Reversing a Linked List is written by me [here](https://github.com/cleanhand/phase-1-kartikjain2001/blob/main/Linked%20List/Reversing%20a%20Linked%20List.c)
