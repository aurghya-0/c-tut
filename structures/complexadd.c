#include <stdio.h>

struct complex
{
    float real;
    float imag;
};

typedef struct complex cmplx;

int main()
{
    cmplx c1, c2, result;
    printf("Enter first number (real imaginary): ");
    scanf("%f %f", &c1.real, &c1.imag);
    printf("Enter second number (real imaginary): ");
    scanf("%f %f", &c2.real, &c2.imag);

    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;

    printf("\nResult = %.2f + %.2fi\n", result.real, result.imag);
    
    return 0;
}