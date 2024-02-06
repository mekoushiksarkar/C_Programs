/*
Enter range: 5
* * * * *
 * * * *
  * * *
   * *
    *
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, j, l;
    printf("\n Enter range: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i - 1; j++)
        {
            printf(" ");
        }
        for (l = 1; l <= n - j; l++)
        {
            printf(" *");
        }
        printf("\n");
    }
    getch();
}