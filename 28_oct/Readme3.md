README for Number Classification Program(Q3):
This program categorizes a single integer input by the user into three categories: zeros, negative numbers,and positive numbers. It counts the occurrences of zeros and sums the values of negative and positive numbers.

Variable Declaration:
int x: This variable holds the user-input number.
int zero_count: Initialized to 0, it counts how many times the user enters zero.
int minus_sum: Initialized to 0, it sums all negative numbers entered by the user.
int plus_sum: Initialized to 0, it sums all positive numbers entered by the user.

User Input:
The program prompts the user to enter a number.
It reads the input using scanf() and stores it in the variable x.

Classification and Calculation:
The program uses conditional statements to classify the input:
If x is 0, it increments zero_count by 1.
If x is negative (less than 0), it adds x to minus_sum.
If x is positive (greater than 0), it adds x to plus_sum.