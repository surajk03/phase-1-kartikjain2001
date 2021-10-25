# Question ❔

Reverse a Linked List in two parts according to a give index.

## Understanding the question 🤔

In this question , a key **k** is given as an integer.

We have to reverse the first **k** nodes and the remaining nodes separately and then merge those two reverse portions into a single Linked List.

## Approach
* We should know how to reverse a Linked List before this question. The detailed explanation for it is given [here](https://github.com/cleanhand/phase-1-kartikjain2001/blob/main/Linked%20List/Reversing%20a%20Linked%20List.md).
* Now , we would simply reverse the first **k** elements while using an index *i* which will help us traverse only till the first *k* nodes.
> Let **k = 3**;
~~~
int i = 1;

while (i != 3)
{
    right = current -> next;
    current -> next = left;
    left = current;
    current = next;
    
    i++;
}
i += 1;
head = left;

~~~
> Using this code snippet , we will reverse the first *k* elemets of the Linked List.

* Now , we need to reverse the remaining elements of the Linked List.
~~~
left = NULL;

while (i != 7)
{
    right = current -> next;
    current -> next = left;
    left = current;
    current = right;
    
    i++
    
}
~~~
Using this code snippet , the remaining elements will be reverse separately.
* Now , we need to combine them to form a single linked list.
  * We would traverse through the first reverse linked list and when we encounter the last node , we will link it to the first node of the other reverse linked list.

## Code

The code for the given problem will be updated [here](https://github.com/cleanhand/phase-1-kartikjain2001/blob/main/Linked%20List/Linked%20List%20problems%20code/Reversing%20a%20Linked%20List%20in%20parts.c).


