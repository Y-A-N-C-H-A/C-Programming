#include <stdio.h>

int main()
{
    
    char str1[6] = "Hello";
    char str2[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char *str3 = "Hello";

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);

    FILE *fp;
    if ((fp = fopen("file.txt","a")) == NULL)
    {
        printf("Error");
    }
    else{
        printf("You are inside the file");
        fputs("Hi!", fp);
    }
    //TUDublin
    
}