/*
 Enter the number of Rows: 4
 1
 0  1
 0  1  0
 1  0  1  0
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, n, t;
    printf("\n Enter the number of Rows: ");
    scanf("%d", &n);
    t = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (t % 2 == 0)
                printf(" 0 ");
            else
                printf(" 1 ");
            t++;
        }
        printf("\n");
    }
    return 0;
}