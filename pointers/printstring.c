#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;

    printf("Enter any string :: ");
    scanf("%s", str);

    // assign address of str to ptr
    ptr = str;

    printf("\nThe entered string is :: \n");

    while (*ptr != '\0')
        printf("%c", *ptr++);

    return 0;
}