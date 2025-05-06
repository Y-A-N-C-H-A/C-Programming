/*******************************************************************************
 * Program: GCD Calculator
 *
 * This program calculates the Greatest Common Divisor (GCD) of two integers
 * using the Euclidean algorithm.
 *
 * Time Complexity:
 * - O(log(min(a, b))) where a and b are the input integers.
 *   This is because in each step of the algorithm, the size of the numbers
 *   involved decreases roughly by half.
 *
 * Space Complexity:
 * - O(1) as it uses an iterative approach (no recursion or extra space required).
 *   The program uses only a constant amount of space regardless of the input size.
 ******************************************************************************/

 #include <stdio.h>

 // Function to calculate the GCD of two numbers using the Euclidean algorithm
 int gcd(int a, int b);
 
 int main()
 {
     // Example input values
     int num1 = 100000;  // First number
     int num2 = 100;     // Second number
 
     // Call gcd function to calculate the GCD of num1 and num2
     int gcd_value = gcd(num1, num2);
 
     // Output the result
     printf("The two numbers are: %d, %d\n", num1, num2);
     printf("GCD: %d\n", gcd_value);
 
     return 0;
 }
 
 // Function to calculate the Greatest Common Divisor (GCD) of a and b
 int gcd(int a, int b)
 {
     // If b is zero, return a (this is the base case of the Euclidean algorithm)
     if (b == 0)
     {
         return a;
     }
     else
     {
         // Recursive call to the gcd function
         // This uses the remainder of a divided by b, which reduces the problem size
         return gcd(b, a % b);  
     }
 }
 