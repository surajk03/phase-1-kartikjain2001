# Sub -  Arrays

Sub – arrays consist of all the contiguous arrays that can be formed from a given array.

For example in the array [1,2,3], all the sub arrays are (1) (1 2) (1 2 3) (2) (2 3) (3).

# Question
Print all the sub – arrays of a given array.

# Approach

For the given array
* We need to define the starting point, number of elements to be printed in each line and the elements.

* So, for 0 index, we will first define the size of line to be 1 and thus print ar[0] in it.
* Then for 0 index, increase the size of line till size of array and print elements from arr[0] to arr[size of line].
* Do the same for 1 index and further.
* Eg: in the array (1,2,3), we would need to print 

1 *(starting index)*

1 2 *(size of line is 2 and thus, 2 elements are printed)*

1 2 3  *(size of line is 3 and thus, 3 elements are printed)*

2

2 3

3



# Code
```
#include <stdio.h>
void main()
{
    int array[5] = {1,2,3,4,5};
    int i , j;
    int sum = 0;
    for (i = 0 ; i <= 4 ; i++)
    {
        for (j = i ; j <= 4 ; j++)
        {
            for (int k = i ; k <= j ; k++)
            {
                printf ("%d", array[k]);
            
            }
            printf ("\n");
        }
    }
}
```












