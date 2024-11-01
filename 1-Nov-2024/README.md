Q1-Write a program to copy one string into another without using strcpy function.

Explaination:-

Variable Declarations:
char c1[20]: This array is used to store the input string from the user.
char c2[20]: This array will hold the copied string.
int i:This integer is used as a loop index for copying characters.

Logic:-
The program reads a string from user input by using fgets function.
A for loop iterates through each character of c1.
The loop continues until it reaches the null terminator ('\0'), which indicates the end of the string.
Inside the loop, each character from c1 is copied to the corresponding position in c2.