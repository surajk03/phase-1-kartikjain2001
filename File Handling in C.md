# File Handling in C language 🗄️
## Why? 🤔
File handling is used to store data that we would need to access even after the program has been terminated. The variables have a life until the program is running. So, if we could store the data in our hard drive for future uses, it would ease the problem. Such as the information given by the user when he used the program the first time or saving the contact numbers in your phone.

## Different operations in a File 
1.	Creating a new file
2.	Opening an existing file
3.	Reading from a file
4.	Writing to a file 
5.	Moving to a specific location in a file
6.	Closing a file

## A basic C program with different functions used in file handling 💻
```
# include <stdio.h>
void main()
{
 FILE *fp;   /* FILE is a type of variable to access a file and *fp is a pointer to that variable*/
char c;
fp = fopen (“PR1.C” , “r”); /* fopen is a function used to open a certain file mentioned in the brachets “PR1.C” in this case and “r” is the mode of the file. In this case, reading mode is used */
while (1)
{
 ch = fgets (fp);  /* fgets is the function used to read file’s content mention previously */
if (ch == EOF) /* EOF or end of the file is the Macro written in the end of each file */
break;
printf (“%c”, ch);
}
printf (“\n);
fclose(fp); /* fclose is the function used to close the file */
}
```


















