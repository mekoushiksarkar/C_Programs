/* Linear 1-D Array Reverse */

#include <stdio.h>
#include <conio.h>

void main()
{
    int x[5], i;

    printf("\n Enter the value of array: ");
    for (i = 0; i <= 4; i++)
    {
        printf("\n x[%d]= ", i);
        scanf("%d", &x[i]);
    }

    for (i = 4; i >= 0; i--)
    {
        printf("\n x[%d] = %d", i, x[i]);
    }
    getch();
}