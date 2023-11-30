// Sum of Series : 1 - 1/3! + 1/5! - 1/7! + ... + 1/n!

#include <stdio.h>
#include <math.h>

int fac(int x)
{
    int i, fac = 1;
    for (i = 1; i <= x; i++)
        fac = fac * i;
    return fac;
}

int main()
{
    float sum = 0;
    int i, j, limit;

    printf("Enter the limit upto which you want to expand the series: ");
    scanf("%d", &limit);

    for (i = 1, j = 1; i <= limit; i++, j = j + 2)
    {
        if (i % 2 != 0)
        {
            sum = sum + 1.0 / fac(j);
        }
        else
            sum = sum - 1.0 / fac(j);
    }

    printf("Sum of Series upto %d-th term is: %f", limit, sum);
    return 0;
}
