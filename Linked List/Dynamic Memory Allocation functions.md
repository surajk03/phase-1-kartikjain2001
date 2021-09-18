# Dynamic Memory Allocation functions 
**[Dynamic Memory Allocation](https://github.com/cleanhand/phase-1-kartikjain2001/blob/main/Static%20Memory%20Allocation%20and%20Dynamic%20Memory%20Allocation.md)** is done when we need to have control over the memory during the run-time of the program.

**E.g**: If we initialized an array of size 9 but in the program, only 4 indices are used and 5 are empty ,
so we need to decreases the size from 9 to 4 or If we initialized an array of size 9 and 12 elements
are required, space for 3 more elements is made to be available or the size needs to be changed
from 9 to 12.

All these control over the memory are available to programmer when he works with Dynamic Memory Allocation.

## Some functions are used to carry out these tasks.
🌟**Malloc()**

**Malloc() or memory allocation** is a library function and is used to allocate a block of memory on the heap. 

Malloc function gives instruction to check if there is a contiguous memory available for desired size
* If yes, it is assigned the address of that memory or a pointer of type void which can be type casted to any other type of pointer as per the requirement.
* If not, it return NULL.

Malloc always returns a single block of memory of the required size.


### Syntax of malloc()
```
int* ptr;

(typecast* )malloc(sizeof(type)); /*syntax*/

ptr = (typecast* )malloc(sizeof(type));
```

### Understanding the syntax
As we said malloc function searches and is assigned the address of the memory of desired size if available and returns a void pointer which can be type casted to any other type.

The syntax is well – sorted to fulfil all these things.

➡️	 (typecast* ) – as the returned pointer is of void type, we need to type cast it to our necessary pointer type. So, we use typecasting to do this.

➡️  	Malloc() – the malloc function which is used

         ▶️ Malloc(sizeof(type)) – we use the braces in malloc() to assign the size we need to find in the memory. 

           e.g. = malloc(4) is a valid expression meaning that we need a memory block of size 4.

           Malloc(3*4) is also a valid expression meaning that we need a single memory block equal to the size of 3 4 byte sized blocks or 12 memory block size.
           
But, assigning them each time can be a bit confusing and increase the workload. So, we use [sizeof](https://www.tutorialspoint.com/sizeof-operator-in-c) operator to assign the size of the data type we want.

### Allocating memory Dynamically and inserting data
```
#include<stdio.h>
#include<stdlib.h>
void main()
{
int* ptr;
ptr = (int* )malloc(sizeof(int));        /*ptr pointer start pointing to the memory block of 4 bytes */
*ptr = 10;                               /*'10' is stored in that memory block dynamically*/

printf ("%d\n", *ptr);
}
```
🌟**Calloc()**

**Calloc()** or **contigous allocation** is a library function and is used to allocate a specified number of blocks of contigous block of memory in the heap.

Calloc function works in the same manner as Malloc function. It gives instruction to check if there is a congtigous memory available for desired size.
* If yes, it is assigned the memory or a pointer of type void which can be type casted to any other type of pointer as per the requirement
* It not , it returns NULL

🔴Calloc always returns a specified number of blocks (given by the programmer).

🔴Calloc initializes each block with a defalut value '0'.

### Syntax of calloc()
```
int* ptr;
(typecast* ) calloc(n,sizeof(type);       /* synntax */
ptr = (typecast* ) calloc(n,sizeof(type);
/* n is the number of elements which are specified by the programmer */
```
### Understanding the syntax
The terms used in the syntax of calloc function have the same inplication as used in malloc function.

The visible difference is the use of **'(n,sizeof(type))'**.

As we said that calloc function is used to allocate specified number of blocks of memory of specified type. *'n'* determines the number of blocks which are needed by the programmer.

The same can be done in malloc using malloc *'(n*sizeof(type))'*. But, while malloc will allocate a single memory block of size (n*type) , calloc will allocate n number of blocks of size (type).

> This also marks the difference between the both functions.

### Allocating memory Dynamically and inserting data

```
#include <stdio.h>
#include<stdlib.h>

void main()
{
    int i;
    int n;
    int* ptr;
    (int* )calloc(n,sizeof(int));
    ptr = (int* )calloc(n,sizeof(int));

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 0 ; i <= n-1 ;i++)
    {
        *(ptr + i) = i + 1;
    }
    for(i = 0 ; i <= n-1 ;i++)
    {
        printf ("%d\n",*(ptr + i));
    }



}
```






