/* Not Print 4 and 9 - O/P - 1 2 3 5 6 7 8 10 ... */

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, n;
    printf("\n Enter range: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i == 4 || i == 9)
            continue;
        else
            printf("%4d", i);
    }
    getch();
}