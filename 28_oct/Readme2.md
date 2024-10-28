README for Absolute Difference Program(Q2):
This program calculates the absolute difference between two integers entered by the user. The absolute difference is defined as the non-negative difference between two numbers, ensuring that the result is always positive regardless of the order of the numbers

Variable Declaration:
Three integer variables: x, y, and z.
x and y will hold the user-input numbers, while z will be used to store the difference between x and y.

User Input:
The program prompts the user to enter two integers.
These integers are read using scanf() and stored in variables x and y.

Calculate Difference:
The program calculates the difference between x and y and stores it in z.
It checks if z is less than 0 to determine which number is greater.

Adjusting Values:
If z is negative (meaning y is greater than x), it modifies y to be y - x.
If z is not negative, it adjusts y to be x - y.
