/*
 Enter range: 5
 1
 3  3
 5  5  5
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, j;

    printf("\n Enter range: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i = i + 2)
    {
        for (j = 1; j <= i; j = j + 2)
        {
            printf(" %d ", i);
        }
        printf("\n");
    }
    getch();
}