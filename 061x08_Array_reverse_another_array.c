/* Reverse of an 1-D Array and store into another Array */

#include <stdio.h>
#include <conio.h>

void main()
{
    int a[5], b[5], j, i, k = 0;
    printf("\n Enter the value of array: ");
    for (i = 0; i < 5; i++)
    {
        printf("\n x[%d]= ", i);
        scanf("%d", &a[i]);
    }

    for (j = 4; j >= 0; j--)
    {
        b[k] = a[j];
        k++;
    }

    for (k = 0; k < 5; k++)
    {
        printf("\n b[%d] = %d", k, b[k]);
    }
    getch();
}