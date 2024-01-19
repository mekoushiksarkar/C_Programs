/* Find the value of 1 + 1/2! + 1/3! + ... upto (0.001) places */

#include <stdio.h>
#include <math.h>

int main()
{
    int n = 2;
    double sum = 1.0, fac = 2.0, term;
    do
    {
        term = (1 / (double)fac);
        // printf("\n Term = %lf", term);
        sum = sum + term;
        printf("\n Sum = %lf", sum);
        n = n + 1;
        fac = fac * (n);
    } while (term > 0.001);
    printf("\n The Sum is = %lf", sum);
    return 0;
}