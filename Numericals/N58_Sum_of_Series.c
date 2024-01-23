/* Find the value of 1 + 1/2 + 1/3 + ... upto 4 decimal places */

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n = 2;
    double sum = 1.0, term;
    do
    {
        term = (1 / (float)n);
        // printf("\n Term = %lf", term);
        sum = sum + term;
        n = n + 1;
    } while (fabs(term) >= 0.0001);
    printf("\n The Sum is : %lf", sum);
    return 0;
}