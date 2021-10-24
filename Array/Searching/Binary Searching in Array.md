# Topic
Binary Searching of an element in an Array

# Question
Find if the element input by the user is present in the given array and if, mention its index.

# Approach
* For the given array, sort it into ascending order.
* We consider the 0 index to be the start and ‘size_of_array - 1’ index to be the ending and find the middle element using the formula 
*‘ Middle = start + (ending - start)/2 ‘*
* If the middle  = element, we found the element.
* If middle > element, the element must now lie to the left to the middle element. So, we edit the ending as middle – 1 with starting being 0.
* If middle < element, the element must now lie to the right to the middle element. So, we edit the starting as middle + 1, ending being ‘size_of_array - 1’.
* Now, we doing this until the starting < = ending.
* If we do not find the element in the array until starting becomes greater than ending, we say that the element is not present in the array.

# CODE
```
#include <stdio.h>

 void main () 
{
int arr[5] = { 10, 12, 23, 44, 55 };
int element = 12;
int found;

found = binary_search (arr, 0, 4, element); 

if (found == -1)
printf ("The element is not in the array\n");
    else
printf ("The element is present in the array at %d ", found + 1);
    
}

 
int binary_search (int array[], int s, int e, int element) 
{
  
int middle;
  
while (s <= e)
    
 
    {
      
middle = s + (e - s) / 2;
     
if (array[middle] == element)
	
return middle;
      
if (array[middle] > element)
	
e = middle - 1;
      
      else
	
s = middle + 1;
    
}
  
return -1;
}
```

 

 

