# Topic
Linear Searching of an element in an Array
# Question
Find if the element input by user is present in the given array
# Approach

* For the given array, sort it into ascending order.
* We run a loop from index 0 and iterate to ‘size - 1’.
* If array[lv] = input element, we print that it is present in the array at index ‘lv+1’
* If there is no element of array equal to input element till the end for the loop, we print that the input element is not present in the given array.

# Code
```
#include <stdio.h>
void main ()
{
  int arr[5] = { 1, 2, 3, 4, 5 };
  int element = 4;
  int found;

  found = linear_search (arr, 4, element);
  if (found == -1)
    printf ("The element is not in array\n");
  else
    printf ("The element is in array at %d", found + 1);
}

int ear_search (int array[], int end, int element)
{
  int lv;
  for (lv = 0; lv <= end; lv++)
    {
      if (array[lv] == element)
	return lv;
    }
  return -1;

}
```



