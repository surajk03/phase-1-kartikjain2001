// First task code
#include <stdio.h>

void main()
{
    int field[4][4] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}; //input a minefield with initial values set to '1'.
    int row , column , n_o_mines, i;
    
   printf ("Welcome to the Minesweeper game\n");
    
    printf ("Enter the number of mines you want in the minefield: ");
    scanf ("%d", &n_o_mines);
    if(n_o_mines > 16) //TO check the user do not exceed the size of the minefield
    {
    printf ("Do not exceed the size of minefield.\n");
    
    }
    
    
    else
    {
    printf ("Enter the coordinates where you want to place the mine starting from '0 0' for the first element and further\n");
    for (i = 1 ; i <= n_o_mines ; i++)
    {
    scanf ("%d %d", &row , &column);
    field[row][column] = 2;
    }
    }
    for (row = 0 ; row <= 3 ; row++) //printing the updated minefield with mines set 
    {
        for (column = 0 ; column <= 3 ; column++)
        {
            printf ("%d ", field[row][column]);
        }
        printf ("\n");
    }    
    
}

