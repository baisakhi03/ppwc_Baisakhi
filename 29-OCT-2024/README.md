Q1- Write a c program to replace 0 and 1 in a number

Explaination-
This C program reads a number from the user as a string and replaces 0 with 1 and 1 with 0. It outputs the modified  number.

LOGIC:-
First we declared a char array s of size 100.
Then we ask the user to enter the number which will be read by the fgets function into the array s.
then we run a for loop, this loop iterates over each character in the string s until it encounters the null terminator ('\0'), which indicates the end of the string.
Inside the loop, it checks each character:
If the character is 0, it replaces it with 1.
If the character is 1, it replaces it with 0.

then the modified string is displayed.
