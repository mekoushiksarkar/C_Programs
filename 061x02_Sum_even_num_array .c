/*  Sum of Even No. using Array */

#include <stdio.h>
#include <conio.h>

void main()
{
    int x[10], i, size, sum = 0;

    printf("\n Enter Array Size: ");
    scanf("%d", &size);

    printf("\n Enter elements: \n");
    for (i = 0; i < size; i++)
    {
        printf("\n x[%d] = ", i);
        scanf("%d", &x[i]);
    }
    for (i = 0; i < size; i++)
    {
        if (x[i] % 2 == 0)
        {
            sum = sum + x[i];
        }
        else
            continue;
    }
    printf("\n SUM = %d", sum);
    getch();
}