# Question ❔

Remove the loop if present in a Linked List

## Approach 💡

To remove the loop , we must be able to detect the loop in the first place. The detailed solution for it is given [here](https://github.com/cleanhand/phase-1-kartikjain2001/blob/main/Linked%20List/Detecting%20a%20Loop%20in%20a%20LInked%20List.md)

* Now , let us suppose the fast and the slow pointer met at a certain node *temp5*.
 * We will put the fast pointer at the first node , the slow pointer will remain at temp5 only.
 * Now , move both pointers one at a time , untill they meet.
 * The node at which they meet , is the node from where the loop is starting.
* We have detected the starting point of the loop

At this point , we have a fast pointer which moved from the first node and th eslow pointer which moved from temp5.

If we keep moving the fast pointer until it move through the whole loop and comes to the last node of the loop or when
~~~
fast -> next == slow;
~~~

we will simply break the node and point it to NULL.

~~~
fast -> next = NULL;
~~~
In this way , the loop is removed in the Linked List.

## Code 💻

The solution code for the problem is given [here](https://github.com/cleanhand/phase-1-kartikjain2001/blob/main/Linked%20List/Linked%20List%20problems%20code/Removing%20a%20loop%20in%20a%20Linked%20list.c)
