/* Sorting of an 1-D Array */

#include <stdio.h>
#include <conio.h>

void main()
{
    int a[20], n, i, j, temp;
    printf("\n Enter the number of elements: ");
    scanf("%d", &n);

    printf("\n enter %d integers\n", n);
    for (i = 0; i < n; i++)
    {
        // printf("\n a[%d]=", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\n Sorted list in ascending order:\n ");
    for (i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
    getch();
}