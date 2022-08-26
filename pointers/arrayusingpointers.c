#include<stdio.h>

int main()
{
    int a[5];
    printf("Enter 5 elements: \n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", a + i);
    }
    printf("You have entered: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(a + i));
    }
    printf("\n");
    return 0;
}