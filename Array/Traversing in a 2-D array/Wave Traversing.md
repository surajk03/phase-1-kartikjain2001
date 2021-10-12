# Wave Traversing in a 2-D array / matrix 〰️ 

Wave Traversing involves the traversing in a 2-D array in down - up - down manner while updating the columns.

> The picture below depicts the visual representation of wave traversing in a 2-D array / matrix
> ![wave traversing](https://user-images.githubusercontent.com/74143496/136958455-b11e2021-ac8d-439d-945c-1987c4ca29d8.png)

## Algorithm

* Declare a 2-D array.
* Take a variable *col* , put it to *0* initially ,  to keep track of columns and update them.
* We will see if the value of *col* variable is even , we will go down in the row for that column and print the elements.
* Then , update the *col* variable by adding *1* to it.
* Now , as the value of *col* becomes odd , we will go up in the row for that column and print the elements.
* Repeat the cycle until 
```
col != (no of rows)
```
## Code
A simple code for wave traversing in a 2-D array / matrix is given [here](https://github.com/cleanhand/phase-1-kartikjain2001/blob/main/Array/Traversing%20in%20a%202-D%20array/Wave%20Traversing.c).

