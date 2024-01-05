/* To find the Factorial of a Number using "while" loop */

#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, f;
    printf("\n Enter the number: ");
    scanf("%d", &n);

    f = 1;
    i = 1;
    while (i <= n)
    {
        if (n < 0)
            printf("\n Factorial is never negative.");
        else
        {
            f = f * i;
            i = i + 1;
        }
    }
    printf("\n Factorial of %d = %d", n, f);
    return 0;
}