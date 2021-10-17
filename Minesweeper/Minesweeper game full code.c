//Updated till Stage - 2 , first part

#include <stdio.h>

void display_minefield (int field[4][4])
{
    int row , column;
    for (row = 0 ; row <= 3 ; row++)
    {
        for (column = 0 ; column <= 3 ; column++)
        {
            printf ("%d ", field[row][column]);
        }
        printf ("\n");
    }
}

void place_mines (int field[4][4])
{
    int n_o_mines , i , j , row , column;
   printf ("Enter the number of mines you want in the minefield: ");
    scanf ("%d", &n_o_mines);
    if(n_o_mines > 16)
    {
    printf ("Do not exceed the size of minefield.\n");
    
    }
    
    
    else
    {
    printf ("Enter the coordinates where you want to place the mine starting from '0 0' for the first element and further\n");
    for (i = 1 ; i <= n_o_mines ; i++)
    {
    scanf ("%d %d", &row , &column);
    if (column > 3 || column < 0 || row >3 || row <0)
    {
        printf ("Please enter the coordinate within the minefield\n");
        n_o_mines += 1;
        
    }
    else
    {
    field[row][column] = 2;
    }
    }
    
    
    } 
}

void detect_row(int field[4][4] , int* row , int* column , int* n_o_squares)
{
    int j , count = 0;
   if (*row <=3 && *column <= 3 && *column + *n_o_squares <= 4)
        {
    for (j = *column ; j <= *column + *n_o_squares - 1 ; j++)
    {
        
        
        if(field[*row][j] == 2)
        {
            count += 1;
        }
        
        
    }
    printf ("For the given set of commands , the number of mines in the field is ");
    printf ("%d\n", count);
    } 
}

void detect_square(int field[4][4] , int* row , int* column , int* n_o_squares)
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
            if (col_e > 3)
            {
                col_e = 3;
            }
            if (row_s < 0)
            {
                row_s = 0;
            }
            if (row_e > 3)
            {
                row_e = 3;
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
        printf ("The number of mines in the specified square grid is %d\n", count);
}

void main()
{
    int field[4][4] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int row , column , n_o_mines, i , j;
    int command_type , n_o_squares; 
    int count = 0;
    
    place_mines(field);
    
    display_minefield(field);
    
    
    printf("Enter your command in the form of four integers: ");
    scanf ("%d %d %d %d" , &command_type , &row , &column , &n_o_squares);

    if (command_type == 1)
    {
        detect_row(field , &row , &column , &n_o_squares);
        display_minefield(field);
    }
    if(command_type == 2)
    {
        detect_square(field , &row , &column , &n_o_squares);
        display_minefield(field);
    }
 
}
