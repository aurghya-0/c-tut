#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int len, i;
    char *s;

    printf("Enter any String :: ");
    scanf("%s", str);

    s = str;

    len = strlen(s);
    printf("\nThe Reverse of the String \"%s\" is :: ", s);
    for (i = len; i >= 0; i--)
    {
        printf("%c", *(s + i));
    }
    printf("\n");

    return 0;
}