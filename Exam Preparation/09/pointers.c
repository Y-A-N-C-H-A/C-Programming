#include <stdio.h>

int main()
{
    float my_array[5] = {0};
    float *ptr = my_array;
    
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", (ptr + i));
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%f\t", *(ptr + i));
    }
    
}
