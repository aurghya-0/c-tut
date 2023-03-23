#include <stdio.h>
#include <stdlib.h>

void take_input(int** p, int* size)
{
    int* q = *p; // q for storing the address of the first number
    int i = 1;
    printf("Enter infinite Numbers(-1 to stop reading) :: \n");
    printf("\nEnter a[%d] :: ", i - 1);
    *p = (int*)malloc(sizeof(int)); // allocate memory for the first number
    scanf("%d", &(*p)[0]); // take input of the first number

    while ((*p)[i - 1] != -1) // read until -1 is entered
    {
        i++; // increase the array size
        // re-allocate memory to match the size of the array
        *p = (int*)realloc(*p, sizeof(int) * i);
        q = *p; // store it inside q
        printf("Enter a[%d] :: ", i);
        scanf("%d", &(*p)[i - 1]);
    }

    *p = q; // copy the memory of q to p
    *size = i - 1; // set the size of the array
}

void bubble_sort(int* p, int size)
{
    int i, j, temp;

    // sorting numbers using bubble sort
    for (i = 0; i < size - 1; ++i)
    {
        for (j = 0; j < size - i - 1; ++j)
        {
            if (p[j] > p[j + 1])
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

void print_output(int* p, int size)
{
    int i;
    printf("\nAfter Sorting, Numbers are :: ");
    for (i = 0; i < size; ++i)
    {
        printf(" %d", p[i]);
    }
    printf("\n");
}

int main()
{
    int* p = NULL;
    int size = 0;

    take_input(&p, &size);
    bubble_sort(p, size);
    print_output(p, size);

    free(p); // free allocated memory
    return 0;
}
