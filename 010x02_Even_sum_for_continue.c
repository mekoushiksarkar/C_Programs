/*  Sum of Even No. using for-loop */

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, sum = 0;
    
    printf("\n Enter the range : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum = sum + i;
        else
            continue;
    }
    printf("\n The sum of all even number from 1 to %d = %d", n, sum);
    getch();
}