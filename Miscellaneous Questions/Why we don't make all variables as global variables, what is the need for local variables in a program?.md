
# Local Variables
These are the variables which are declared within a programming block or function, gets executed within the block and cease to exist after the execution.
# Global Variables
These are the variables declared outside any programming block or function. These variables exist throughout the execution of the whole program and thus, can be accessed by any function in the program.
***
## *Why we don't make all the variables as global variables, what is the need for local variables?*
We should not use just Global Variables in our program due to the following reasons
* Due to Global Variables exists until the whole program is working, too many global variables will use up more memory and can cause 'Out of Memory' issue.
* As the global variable can be accessed by any function in the program, the value of global variable can change due to any statement in the program and thus, give up different results.
* On the other hand, Local Variables are declared for each function in the program. So, change in the value of the local variable in one function does not affect the result in any other function.
* Also, we can give same name to local variables in different functions as they are recognized by their own function.



