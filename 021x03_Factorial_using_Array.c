/* Factorial using Array */

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, j;
    long int f;
    int x[30];

    printf("\n How many numbers: ");
    scanf("%d", &n);
    
    printf("\n Enter %d Numbers: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("\n x[%d]=", i);
        scanf("%d", &x[i]);
    }
    for (i = 0; i < n; i++)
    {
        f = 1;
        for (j = 1; j <= x[i]; j++)
        {
            f = f * j;
        }
        printf("\n %4d! = %ld", x[i], f);
    }
    getch();
}