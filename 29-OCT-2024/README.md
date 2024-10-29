Q1- Write a c program to replace 0 and 1 in a number
Explaination-
In the program, the varialable declared are:-
n-to store the number from the user by scanf function.
number-stores the new number after replacing 0 an 1 and it is intialized to 0
c-counter variable taken to check for negative number,it is set to 0.It will be incremented by 1 if the n entered is negtive.
place-it is taken to track the position in the new number so that every digit is placed on the right position.
it
LoGIC:-
if the n is negative,then we increment the c to 1 and stores the abosulte value of n in n.
If the n is zero,then the new number is automtically state to 1
if the n is greater than 0,then 
The program extracts the last number and stores it in a variable "digit".
then it checks digit for the 0's and 1's using if-else conditional statement
if the digit is 0,then the the digit is multiplied with its place (unit value) and is aadded with the number and is stores in the number.
After successfully processing the digit ,the n is divided by 10 to remove the rightmost digit and p is increment by 10 fot the next iteration.
 if the c(counter) is 1 or more than 1,then we take the negative of the number.
 
then the number is displayed.
