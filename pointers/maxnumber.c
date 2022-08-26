#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *p, i, h = 0;

    printf("How many numbers u want :: ");
    scanf("%d", &n);

    p = (int *)malloc(sizeof(int));

    if (p == NULL)
    {
        printf("\nMemory Allocation unsuccessful.\n");
        exit(0);
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter Number %d :: ", i + 1);
        scanf("%d", p + i);
    }

    h = *p;
    for (i = 1; i < n; i++)
    {
        if (*(p + i) > h)
            h = *(p + i);
    }
    printf("\nThe Largest Number is %d \n", h);

    return 0;
}