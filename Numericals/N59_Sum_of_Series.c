/* Find the value of 1 + (n^(n-1)*3^(n-1)) / n! + .... */

#include <stdio.h>
#include <math.h>

int main()
{
    int n = 2, fac = 2;
    float sum = 1.0, term, term1;
    do
    {
        term = (pow(n, (n - 1))) * (pow(3, (n - 1)));
        printf("\n Term = %f", term);
        term1 = term / (float)fac;
        printf("\n Term1 = %.4f", term1);
        sum = sum + term1;
        printf("\n SUM1 = %.4f", sum);
        n = n + 1;
        fac = fac * n;
    } while (fabs(term1) <= 0.0001);
    printf("\n Sum = %.4f", sum);
    return 0;
}