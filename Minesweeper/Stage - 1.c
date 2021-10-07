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

//Updated code first and second task both

#include <stdio.h>

void main()
{
    int field[4][4] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int row , column , n_o_mines, i , j;
    int command_type , n_o_squares; 
    int count = 0;
    
    
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
    field[row][column] = 2;
    }
    }
    for (row = 0 ; row <= 3 ; row++)
    {
        for (column = 0 ; column <= 3 ; column++)
        {
            printf ("%d ", field[row][column]);
        }
        printf ("\n");
    }
    printf("Enter your command in the form of four integers: ");
    scanf ("%d %d %d %d" , &command_type , &row , &column , &n_o_squares);

    if (command_type == 1)
    {
        if (row <=3 && column <= 3 && column + n_o_squares <= 4)
        {
    for (j = column ; j <= column + n_o_squares - 1 ; j++)
    {
        
        
        if(field[row][j] == 2)
        {
            count += 1;
        }
        
        
    }
    printf ("For the given set of commands , the number of mine sin the field is ");
    printf ("%d", count);
    }
    }
 for (row = 0 ; row <= 3 ; row++)
    {
        for (column = 0 ; column <= 3 ; column++)
        {
            printf ("%d ", field[row][column]);
        }
        printf ("\n");
    }
}
