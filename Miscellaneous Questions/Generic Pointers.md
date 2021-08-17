## Generic Pointers
* *Generic Pointer* also known as *Void Pointer* is a type of pointer with no data type assigned to it.
* These pointers can hold the address of any type of variable and can be typecasted to any type.
* As this pointer does not hold any data type, it is not possible to deference it without typecasting.
```
#include <stdio.h>
int
main ()
{
  int a = 10;
  void *ptr;
  ptr = &a;
  printf ("%d\n", *ptr);	//We have not typecasted the void pointer 'ptr' to any type
  return 0;
}
```

> In the above code, we did not typecasted the void pointer 'ptr' to any data type and thus, it will show a compilation error like this

<img width="442" alt="3" src="https://user-images.githubusercontent.com/74143496/129729765-a29479fd-f8b8-4789-96c7-95990e8ff8d7.PNG">

```
#include <stdio.h>
int
main ()
{
  int a = 10 , b = 13;
  char c = 't';
  void *ptr;
  ptr = &a;
  printf ("%d\n", *(int *)ptr); //We typecasted the void pointer 'ptr' to int data type with variable 'a'
  ptr = &b;
  printf ("%d\n", *(int *)ptr); //We typecasted the void pointer 'ptr' to int data type with variable 'b'
  ptr = &c;
  printf ("%c\n", *(char *)ptr); //We typecasted the void pointer 'ptr' to char data type
  return 0;
}
```



> In the above code, we typecasted the void pointer 'ptr' to different data types and assigned variables to them and it printed respective values.









