#include <stdio.h>
#include <stdlib.h>

#define NUM_OF_STUDENTS 3
int main()
{
    int cs_students[NUM_OF_STUDENTS];
    int *ptr = cs_students;
    int avg = 0, sum = 0, maxA, minA;
    printf("Enter the ages of the  %d students \n", NUM_OF_STUDENTS);
    for (int i = 0; i < NUM_OF_STUDENTS; i++)
    {
        scanf("%d", &*(ptr + i));
    }
    maxA = minA = *ptr; // Initialize maxA and minA after input
    for (int i = 0; i < NUM_OF_STUDENTS; i++)
    {
        if (*(ptr + i) > maxA)
        {
            maxA = *(ptr + i);
        }
        if (*(ptr + i) < minA)
        {
            minA = *(ptr + i);
        }
        sum += *(ptr + i);
        avg = sum/NUM_OF_STUDENTS;
    }
    for (int i = 0; i < NUM_OF_STUDENTS; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\nAverage age: %d ", avg);
    printf("\nMax age: %d ", maxA);
    printf("\nMin age: %d ", minA);
    return 0;
}