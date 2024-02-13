/* Decimal to Hexa-Decimal */

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, n1, t, w, a[100], i1 = 0;
    float n, f2;

    printf("\n PROGRAM FIR DECIMAL TO HEXADECIMAL CONVERSION");
    printf("\n..............................................");
    printf("\n Enter a Decimal number : ");
    scanf("%f", &n);

    w = n;
    f2 = w;
    if (f2 == n)
    {
        printf(" ");
        f2 = 0;
    }
    else
    {
        f2 = n - f2;
    }
    n1 = n;
    for (i = 0; n1 >= 1; i++)
    {
        t = n1 % 16;
        n1 = n1 / 16;
        i1++;
        a[i] = t;
    }
    printf("\n In the Hexadecimal equivalent : ");
    for (i = (i1 - 1); i >= 0; i--)
    {
        if (a[i] == 10)
            printf("A");
        else if (a[i] == 11)
            printf("B");
        else if (a[i] == 12)
            printf("C");
        else if (a[i] == 13)
            printf("D");
        else if (a[i] == 14)
            printf("E");
        else if (a[i] == 15)
            printf("F");
        else
            printf("%d", a[i]);
    }
    printf(".");
    for (i = 1; i <= 16; i++)
    {
        f2 = f2 * 16;
        w = f2;
        if (w >= 1)
        {
            if (w == 10)
                printf("A");
            else if (w == 11)
                printf("B");
            else if (w == 12)
                printf("C");
            else if (w == 13)
                printf("D");
            else if (w == 14)
                printf("E");
            else if (w == 15)
                printf("F");
            else
                printf("%d", w);
            f2 = f2 - (float)w;
        }
        else
        {
            printf("0");
        }
    }
    getch();
}