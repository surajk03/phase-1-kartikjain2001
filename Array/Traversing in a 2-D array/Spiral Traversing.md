# Spiral Traversing in a 2-D array / matrix

Spiral Traversing involves printing or traversing through all the elements in a 2-D array in a clockwise manner.

> The picture below depicts spiral traversing in matrix.


> ![spiral traversing](https://user-images.githubusercontent.com/74143496/136946974-23152210-814f-4ef1-bfba-021cfad6a720.png)

**This method is used in developing many 2-D games like minesweeper , snake**

## Algorithm
We will take use of 4 variable to keep track of the direction of traversing and to change it accordingly.

* Declare a 2-D array.
* Take 4 variables like 
  * *row_s* (to keep track of starting row)
  * *row_e* (to keept track of  ending row)
  * *col_s* (to keep track of starting column)
  * *col_e* (to keep track of the ending column)
  
  
  > We will keep updating all these 4 varaibles as per our need to change the direction.

* Now we will use loops to traverse linearly in horizontal direction from Left to right , then change the direction and traverse in the vertical direction from up to down , then again change the direction and move right to left , then further from down to up and thus keep changing the direction until we encounter the last element to be printed.
> Updating the variables is necessary or else we will keep traversing in the same row and column set endlessly ☠️

## Code

A simple code for traversing in a 2-D array is given here.
> A more general form of the code will be given shortly.