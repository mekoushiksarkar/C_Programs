/*
 Enter range: 3
 1  
 2   6  
 24   120   720
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, j, s = 1, f = 1;

    printf("\n Enter range: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            f = f * s;
            printf(" %d  ", f);
            s = s + 1;
        }
        printf("\n");
    }
    getch();
}