/* To find the Factorial of a Number using "do-while" loop */

#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, f = 1;
    printf("\n Enter the number: ");
    scanf("%d", &n);

    i = 1;
    if (n < 0)
        printf("\n Factorial of a negative number does not exist.");
    else
    {
        do
        {
            f = f * i;
            i = i + 1;
        } while (i <= n);
    }
    printf("\n Factorial of %d = %d", n, f);
    return 0;
}