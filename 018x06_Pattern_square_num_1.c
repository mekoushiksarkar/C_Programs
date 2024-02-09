/*
 Enter range: 3
  1    1    1
  1    1    1
  1    1    1
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
        for (j = 1; j <= n; j++)
        {
            printf("  1  ");
        }
        printf("\n");
    }
    getch();
}