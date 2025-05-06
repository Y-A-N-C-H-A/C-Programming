/*******************************************************************************
 * Program: Fibonacci Calculator
 *
 * This program calculates the nth Fibonacci number using recursion.
 *
 * Time Complexity:
 * - O(2^n) due to the exponential growth of the recursive calls.
 *   A more efficient solution could use dynamic programming (O(n)).
 *
 * Space Complexity:
 * - O(n) due to the depth of the recursion stack.
 ******************************************************************************/

 #include <stdio.h>

 // Function to calculate the nth Fibonacci number using recursion
 int fibonacci(int n);
 
 int main()
 {
     // Example input value
     int num = 7;  
 
     // Call fibonacci function to calculate the Fibonacci number for num
     int fibonacci_value = fibonacci(num);
 
     // Output the result
     printf("The number is: %d\n", num);
     printf("Fibonacci: %d\n", fibonacci_value);
 
     return 0;
 }
 
 // Function to calculate the nth Fibonacci number using recursion
 int fibonacci(int n)
 {
     // Base cases for Fibonacci sequence
     if (n <= 1)
     {
         return n;
     }
     else
     {
         // Recursively call fibonacci for n-1 and n-2 and add them together
         return fibonacci(n - 1) + fibonacci(n - 2);  
     }
 }
 