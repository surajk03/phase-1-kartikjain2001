//First part of Stage - 2
#include <stdio.h>

void detect_square(int field[5][5] , int* row , int* column , int* n_o_squares)
{
    int row_s , row_e , col_s , col_e;
    int count = 0 , i;
    row_s = *row - (*n_o_squares/2);
        row_e = *row + (*n_o_squares / 2);
        col_s = *column - (*n_o_squares / 2);
        col_e = *column + (*n_o_squares / 2);
       while (row_e != 1 && col_e != 1)
        {
            if (col_s < 0 )
            {
                col_s = 0;
            }
            if (col_e > 4)
            {
                col_e = 4;
            }
            if (row_s < 0)
            {
                row_s = 0;
            }
            if (row_e > 4)
            {
                row_e = 4;
            }
    
        for(i = col_s ; i <= col_e ; i++) //Traversing in the horizontal direction from left to right
        {
            if( field[row_s][i] == 2)
            count += 1;
        }
        for(i = row_s+1 ; i <= row_e ; i++) //Traversing in the vertical direction from up to down
        {
            if(field[i][col_e] == 2)
            count += 1;
        }
        row_s += 1; //The row_s is updated so we will stop at one row below the starting one
        for(i = col_e - 1 ; i >= col_s ; i--) //Traversing in the horizontal direction from right to left
        {
            if(field[row_e][i] == 2)
            count += 1;
            
            }
       
        for(i = row_e - 1 ; i >= row_s ; i--) //Traversing in the vertical direction from down to up
        {
            if(field[i][col_s] == 2)
            count += 1;
        }
        col_s += 1; //col_s is updated so that we start in the inner loop
        row_e -= 1; // row_e is updated so that we stop in the inner loop only
        col_e -= 1; //col_e is updated so that we stop in the inner loop only
        }
        printf ("%d", count);
}

void main()
{
    int field[5][5];
    
    
     int row , column , n_o_mines, i,j, count;
     int command_type , n_o_squares ;
     
     
     for (i = 0 ; i<= 4 ; i++)
    {
        for (j = 0 ; j <= 4 ; j++)
        {
            field[i][j] = 1;
         }
    }
    count = 0;
     
     printf("Enter your command in the form of four integers: ");
    scanf ("%d %d %d %d" , &command_type , &row , &column , &n_o_squares);
    if (command_type == 2)
    {
        detect_square(field , &row , &column , &n_o_squares);
    }
     
}
