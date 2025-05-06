#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_INPUT_SIZE 20

// Function to check if a string is a palindrome.
void polCheck(char arr[]);

int main()
{
    char arr[MAX_INPUT_SIZE];
    char result[MAX_INPUT_SIZE + 15]; // Enough space for "You entered: " and the input

    printf("Please enter a string\nMax 20 characters\n");
    // Read input from the user
    fgets(arr, MAX_INPUT_SIZE, stdin);

    // Remove newline character if fgets adds it
    arr[strcspn(arr, "\n")] = '\0';

    // Concatenate "You entered: " with the user's input
    strcpy(result, "You entered: "); // Initialize result with "You entered: "
    strcat(result, arr);             // Concatenate the input string

    // Print the concatenated result
    printf("%s\n", result);

    polCheck(arr);

    return 0;
}

// Function to check if the given string is a palindrome.
// Parameters:
//   arr - The input string to be checked.
void polCheck(char arr[])
{
    int n = strlen(arr) - 1;
    bool isPalindrome = true;
    for (int i = 0; i <= n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        printf("String is a palindrome\n");
    }
    else
    {
        printf("String is not a palindrome\n");
    }
}
