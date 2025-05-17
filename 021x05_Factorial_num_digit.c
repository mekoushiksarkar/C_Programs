/* Factorial of each digit of a number */

#include <stdio.h>
int main()
{
    int n, i, r, f;
    printf("\n Enter the value= ");
    scanf("%d", &n);
    while (n != 0)
    {
        f = 1;
        r = n % 10;
        for (i = 1; i <= r; i++)
            f = f * i;
        printf("\n The factorial of %d is= %d", r, f);
        n = n / 10;
    }
    return 0;
}
