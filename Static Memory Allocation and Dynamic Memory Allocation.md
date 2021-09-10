## Memory is divided into three sections
* Heap Memory
* Stack Memory
*	Code Section
## Static Memory Allocation
* When a program is executed, it fixes the size it will take and can’t be changed further.
* The memory allocation is done by the compiler automatically during compilation.
* It uses the  Stack Data Structure for memory allocation.
* It is a temporary memory allocation and as the function ends, all variables in it loses the memory.
* The allocation of size happens in a contiguous manner. When a function is called, its variables gets memory in the stack and when the function terminates, the memory for the variables are de – allocated.

### Stack
It is a linear data structure which follows a particular order LIFO(Last In First Out) or FILO(First In Last Out).
![12](https://user-images.githubusercontent.com/74143496/132847233-c20ac2c8-0397-4c9a-a6c8-19127d4967ab.png)


Three basic operations are performed in the stack
*	**Push** – Add an item in the stack. If the stack is full, it is said to be an Overflow condition.
* **Pop** – Removes an item from the stack. The items are popped out in the reverse order of which they were pushed. If the stack is empty, it is said to be in Underflow Condition.
*	**Peek or Top** – Return the top element of stack.
 **isEmpty – returns true, if the stack is empty, else returns false.**

## Dynamic Memory Allocation

* In Dynamic Memory Allocation, the size allocation and initialization are done by the programmer itself by the use of pointers that points to the newly allocated memory space in the memory area, Heap.
* This memory allocation comes useful when the programmer needs to allocate the memory manually during the run - time of the program.
* This memory allocation is done by the programmer during the running of the program.
* The memory size can me altered if needed.
* Some functions are used to allocate dynamic memory like malloc(), calloc(), realloc().
* The memory allocated by the programmer manually continues to get allocated until the programmer makes it go away by measures. Thus, giving more power, but with great responsibilities.
















