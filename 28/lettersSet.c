#include <stdio.h>
#include <stdlib.h>

int main()
{
    do
    {
        int size = 0;
        char letter = '0';
        int count = 0;

        printf("Enter the size of your set:\n");
        scanf("%d", &size);
        printf("Enter your set:\n");
        for (int i = 0; i < size; i++)
        {
            scanf(" %c", &letter);
            if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
            {
                count++;
            }
        }
        printf("Number of vowels: %d\n", count);

        char answer;
        printf("Do you want to run it again?(Y/N)\n");
        scanf(" %c", &answer);
        if (answer == 'N')
        {
            return -1;
        }

    } while (1);

    return 0;
}