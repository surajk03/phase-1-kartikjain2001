# Topic
Bubble Sort an array 
# Question
For a given array, sort it into ascending order
# Approach

**For the given array**

* We start by comparing the first element of the array with the next one.
    * If it is greater than the next element, we swap both the elements. 
    * If it is not greater than the next element, we do nothing and move to the next element.
* In the same fashion, we check all the element in the given array.
* In the end all the elements are arranged in an ascending order.

# Code

```
#include <stdio.h>
void swap (int * , int *);
void swap (int *a , int *b)
{
 int t ;
 t = *a ;
 *a = *b ; 
 *b = t ;
}

void main ()
{
 int array [6] = {3 , 4 , 7 , 8 , 9 , 2};
 int lv ;
 int sv ;
 for (sv = 0 ; sv <= 5 ; sv++)
 {
  for (lv = sv + 1 ; lv <= 5 ; lv++)
  {
   if (array[sv] > array[lv])
   {
    swap (&array[sv] , &array[lv]);
   }
  }
 }
 printf ("The ascending order for the following array is as follows:\n ");
 for (lv = 0 ; lv <= 5 ; lv++)
 {
  printf ("%d", array [lv]); 
 }
 
}
```






















