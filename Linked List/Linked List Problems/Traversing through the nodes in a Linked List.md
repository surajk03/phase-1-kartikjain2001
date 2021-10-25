# Topic

Traversing through the nodes in a Linked List

# Approach

* First of all , create a singly linked list with multiple nodes , the first node's addressed being stored in a pointer namely , *head*.
* Now , we will declare a function which when called , take the *head* pointer as arguement and use it as *run* pointer of type *struct node* *.
* This run pointer will start printing run -> data and for traversing , we will use condition as

~~~
run = run -> next;
~~~

A simple code for traversing through the nodes in a linked list is given [here](https://github.com/cleanhand/phase-1-kartikjain2001/blob/main/Linked%20List/Linked%20List%20problems%20code/Traversing%20through%20the%20nodes%20in%20a%20Linked%20List.c).





