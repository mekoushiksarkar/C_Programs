/* Series: 1 + 1/2! + 1/3! + ..... */

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, f = 1;
    float s = 0.0;

    printf("\n Enter the range: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        f = f * i;
        s = s + 1 / (float)f;
    }
    printf("\n Sum of the series: %.4f", s);
    getch();
}