Structures is a user defined data type which is used to group items of different data types into a single type. :

It is used in many real - life problems where we need different data type to store information about a unit.

e.g. - If we need to store the information of students , we would need their names (char) , roll number(int) , marks(float).

![str1](https://user-images.githubusercontent.com/74143496/133730749-f0389a29-8696-442f-8449-06ac29b4bd34.png)

Structures helps us combining all these different data types into a single user defined data type to store and access the information at once.

## Creating a Structure in C

To create a structure , we use **struct** keyword which defines a new user defined data type which can store different data  types in it.

```
struct student
{
  char[100] name;
  int roll_number;
  float marks;
};
```
Now we have created a data type **'struct student'** and we can assign a variable to it and store information of that variable in structstudent data type.

    struct student student1;
We can now fill the information for sachin and access them using struct student data type.

## A simple code

```
#include <stdio.h>

struct student 
{
    char letter;
    int roll_number;
    float marks;
};

void main()
{
    struct student student1;
    student1.letter = 'K';
    student1.roll_number = 46;
    student1.marks = 99.8;
    
    printf ("%d\n", student1.roll_number);
    printf ("%c\n", student1.letter);
    printf ("%lf\n", student1.marks);
    
}

```
we can also declare a pointer and use it to point to variables
```
struct student* ptr;                      /*declaring a pointer varaible 'ptr' or type 'struct student'*/
ptr = &student1;                          /* ptr now stores the address of variable &student1 or points to the variable student1*/

/*now we can access the members of the variavle student1 using arrow operator '->'*/

printf ("%d\n", ptr -> student1);
```



