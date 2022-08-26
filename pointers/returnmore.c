#include<stdio.h>
void func(int x, int y, int *ps, int *pd, int *pp)
{
        *ps = x+y;
        *pd = x-y;
        *pp = x*y;
}
int main( )
{
        int a, b, sum, diff, prod;
        a = 6;
        b = 4;
        func( a, b, &sum, &diff, &prod );
        printf("Sum = %d, Difference = %d, Product = %d\n", sum, diff, prod );

        return 0;
}
