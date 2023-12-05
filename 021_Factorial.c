/* To find the Factorial of a Number */

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n, fact;
    printf("\n Enter the number to find Factorial: ");
    scanf("%d", &n);
    i = n;
    fact = 1;

    while (i > 0)
    {
        fact = fact * i;
        i--;
    }

    printf("\n The factorial of %d :  %d", n, fact);
    return 0;
}
