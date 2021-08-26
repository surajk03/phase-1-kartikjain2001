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






















