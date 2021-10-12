#include <stdio.h>

void main()
{
   int a[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
   
   int col = 0;
   int i;
   
   while(col != 4)
   {
       if(col % 2 == 0)
       {
           for (i = 0 ; i <= 3 ; i++)
           {
               printf ("%d ", a[i][col]);
           }
           
       }
        
       if (col % 2 == 1)
       {
           for (i = 3 ; i >= 0 ; i--)
           {
               printf ("%d ", a[i][col]);
           }
       }
       col = col + 1;
       
   }
   
}
