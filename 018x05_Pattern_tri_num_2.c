/*
 Enter range: 3
  1
  1    2
  1    2    3
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, j;

    printf("\n Enter range: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("  %d  ", j);
        }
        printf("\n");
    }
    getch();
}