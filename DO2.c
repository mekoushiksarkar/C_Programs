#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float x, f;
    clrscr();
    x = 2.0;
    do
    {
        f = 20.4 * (1 + x * x);
        printf("\n The value of f(%.2f)=%.4f", x, f);
        x = x - 0.1;
    } while (x >= 1.0);
    printf("\n The value of f(1.00)=40.8000");
    getch();
}