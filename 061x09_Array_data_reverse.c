/* Reverse data of an 1-D Array and Save into another Array */

#include <stdio.h>
#include <conio.h>

void main()
{
    int a[10], b[10], n, r, i, s;

    printf("\n Enter the value of array: ");
    for (i = 0; i < 5; i++)
    {
        printf("\n x[%d]= ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        n = a[i];
        s = 0;
        while (n != 0)
        {
            r = n % 10;
            s = s * 10 + r;
            n = n / 10;
        }
        b[i] = s;
    }

    for (i = 0; i < 5; i++)
    {
        printf("%4d", b[i]);
    }
    getch();
}