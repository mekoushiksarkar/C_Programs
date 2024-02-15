/* To determine the Prime numbers among 10 numbers using 1-D Array */

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int x[10], p, i, j;

    printf("\n Enter 10 elements of the array:");
    for (i = 0; i < 10; i++)
    {
        printf("\n x[%d]=", i);
        scanf("%d", &x[i]);
    }

    printf("\n The Prime numbers are: ");
    for (i = 0; i < 10; i++)
    {
        j = 3;
        p = 1;
        for (j = 2; j < x[i]; j++)
        {
            if (x[i] % j == 0)
            {
                p = 0;
                break;
            }
        }
        if (p)
            printf("%d \t", x[i]);
    }
    getch();
}