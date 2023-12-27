/* Programme to find the Roots of a Quadratic Equation */

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float a, b, c, d, x1, x2, R, I;
    printf("\n Enter the real values of the coefficients a,b,c : \n");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0)
        printf("\n The equation is NOT Quadratic as a=0.\n");
    else
    {
        printf("\n The coefficients of the given Quadratic Equation \n");
        printf("are %f, %f and %f respectively\n", a, b, c);
        d = b * b - 4.0 * a * c;
        if (d == 0)
        {
            x1 = -b / (2.0 * a);
            printf("\n\n The Real Root is: %.4f", x1);
        }
        else
        {
            if (d > 0)
            {
                x1 = (-b - sqrt(d)) / (2.0 * a);
                x2 = (-b + sqrt(d)) / (2.0 * a);
                printf("\n\n The Real Roots are: %f and %f", x1, x2);
            }
            else
            {
                R = -b / (2.0 * a);
                I = sqrt(-d) / (2.0 * a);
                printf("\n\n The Imaginary Roots are %f + i%f, %f - i%f", R, I, R, I);
            }
        }
    }
    return 0;
}