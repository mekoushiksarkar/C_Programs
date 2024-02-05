/* Decimal to Octal */

#include <stdio.h>
#include <conio.h>

void main()
{
    int m, i = 0, j = 0, x = 0, k = 0;
    int no;
    int a[20], b[20];

    printf("\n Enter Decimal no : ");
    scanf("%d", &no);

    while (no > 0)
    {
        m = no % 8;
        a[i] = m;
        ++i;
        no = no / 8;
    }
    for (j = i - 1; j >= 0; j--)
    {
        b[x] = a[j];
        x++;
    }
    printf("\n Octal number is : ");
    for (k = 0; k < x; k++)
    {
        printf("%d", b[k]);
    }
    getch();
}