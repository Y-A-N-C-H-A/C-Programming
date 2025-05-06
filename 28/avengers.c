#include <stdio.h>
#include <string.h>

#define NUM_AVENGERS 6
#define NAME_LENGTH 20

// Function prototype
void guessAvenger(char avengers[][NAME_LENGTH], int size);
void favoriteAv(void);

int main()
{
    // (a) Store Avenger names in an array
    char avengers[NUM_AVENGERS][NAME_LENGTH] = {
        "Iron Man",
        "Captain America",
        "Black Widow",
        "Thor",
        "Hulk",
        "Hawkeye"};

    // (b) Call the function to handle guessing
    guessAvenger(avengers, NUM_AVENGERS);
    favoriteAv();

    return 0;
}

// Function to prompt user for a guess and compare to array
void guessAvenger(char avengers[][NAME_LENGTH], int size)
{
    char guess[NAME_LENGTH];
    int i, found = 0;

    printf("Guess the name of an Avenger: ");
    fgets(guess, NAME_LENGTH, stdin);

    // Remove newline character from input if present
    guess[strcspn(guess, "\n")] = '\0';

    for (i = 0; i < size; i++)
    {
        if (strcmp(guess, avengers[i]) == 0)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("Correct\n");
    }
    else
    {
        printf("Bad guess – not an Avenger\n");
    }
}

// Function to ask the user for their favorite Avenger and store it in a file
void favoriteAv()
{
    printf("Enter the name of your favorite Avenger:\n");
    char name[NAME_LENGTH];
    fgets(name, NAME_LENGTH, stdin);

    // Remove newline character from input if present
    name[strcspn(name, "\n")] = '\0';

    // File pointer for accessing or modifying Avengers.txt
    FILE *fp;

    // Open the file called Avengers.txt for appending
    if ((fp = fopen("Avengers.txt", "a+")) == NULL)
    {
        printf("\nError opening file");
    }
    else
    {
        fputs(name, fp);
        fputs("\n", fp); // To add a newline after the name
        fclose(fp); // Close the file after writing
        printf("\nYour favorite Avenger has been added to Avengers.txt.\n");
    }
}
