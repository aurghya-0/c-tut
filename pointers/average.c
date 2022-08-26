#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *p, sum = 0, i;
    float avg;

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

    for (i = 0; i < n; i++)
    {
        sum = sum + *(p + i);
    }
    printf("The Sum of %d Numbers is %d \n", n, sum);
    avg = (float)sum / n;
    printf("The Average of %d Numbers is %0.2f \n", n, avg);

    return 0;
}