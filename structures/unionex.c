#include <stdio.h>

int main()
{
    union
    {
        int i;
        float f;
    } u;
    u.f = 3.14159f;
    u.i = 2;
    printf("%d\n", u.i);
    printf("%f\n", u.f);
    return 0;
}
