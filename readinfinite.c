#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, *q, i = 1, j, k, temp; // q for storing address of 1st number
    printf("Enter infinite Numbers(-1 to stop reading) :: \n");
    printf("\nEnter a[%d] :: ", i - 1);
    p = (int *)malloc(sizeof(int)); // allocate memory for the first number
    scanf("%d", &p[0]); // take input of the first number

    while (p[i - 1] != -1) // read until -1 is entered
    {
        i++; // increase the array size
        // re-allocate memory to match the size of the array
        p = (int *)realloc(p, sizeof(int) * i);
        q = p; // store it inside q
        printf("Enter a[%d] :: ", i);
        scanf("%d", &p[i - 1]);
    }

    p = q; // copy the memory of q to p

    // sorting numbers using bubble sort
    // i is the total size of the array
    for (j = 1; j < i; ++j)
    {
        for (k = 0; k < i - j - 1; ++k)
        {
            if (p[k] > p[k + 1])
            {
                temp = p[k];
                p[k] = p[k + 1];
                p[k + 1] = temp;
            }
        }
    }

    printf("\n");

    printf("\nAfter Sorting, Numbers are :: ");
    for (j = 0; j < i - 1; ++j)
    {
        printf(" %d", p[j]);
    }

    printf("\n");

    return 0;
}