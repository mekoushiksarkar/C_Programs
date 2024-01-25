/* Check 3 digit Armstrong No. in an Array */

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int x[30], n, s, m, i, size;
    printf("\n Enter Array Size: ");
    scanf("%d", &size);
    printf("\n Enter array elements: ");
    for (i = 0; i < size; i++)
    {
        printf("\n x[%d] = ", i);
        scanf("%d", &x[i]);
    }
    printf("\n The Armstrong numbers are: ");
    for (i = 0; i < size; i++)
    {
        s = 0;
        m = x[i];
        while (m != 0)
        {
            n = m % 10;
            s = s + n * n * n;
            m = m / 10;
        }
        if (x[i] == s)
            printf("%4d ", s);
    }
    getch();
}