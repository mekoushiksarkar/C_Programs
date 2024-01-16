/* Sum Series of COSINE */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, x1;
    float accuracy, term, denominator, x, cosx, cosval;

    printf("\n Enter the value of x (in degrees) : ");
    scanf("%f", &x);
    x1 = x;
    /*  Converting degrees to radians */
    x = x * (3.142 / 180.0);
    cosval = cos(x);
    printf("\n Enter the accuracy for the result : ");
    scanf("%f", &accuracy);
    term = 1;
    cosx = term;
    n = 1;
    do
    {
        denominator = 2 * n * (2 * n - 1);
        term = -term * x * x / denominator;
        cosx = cosx + term;
        n = n + 1;
    } while (accuracy <= fabs(cosval - cosx));
    printf("\n Sum of the cosine series = %f\n", cosx);
    printf("\n Using Library function cos(%d) = %f\n", x1, cos(x));
    return 0;
}