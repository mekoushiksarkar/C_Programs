/*
Enter range: 5
    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, j, k;
    printf("\n Enter range: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (k = 1; k <= i; k++)
            printf("*");
        printf("\n");
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i; j++)
            printf(" ");
        for (k = 1; k <= n - j; k++)
            printf("*");
        printf("\n");
    }

    getch();
}