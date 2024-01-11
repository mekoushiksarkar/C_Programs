/* Euler's Method */

#include <stdio.h>

int main()
{
    float x, y, h, n, xf;
    int i;
    float f(float, float);
    printf("\n Enter the initial x : ");
    scanf("%f", &x);
    printf("\n Enter initial f(x) : ");
    scanf("%f", &y);
    printf("\n Enter h : ");
    scanf("%f", &h);
    printf("\n Enter the value for which you have to find : ");
    scanf("%f", &xf);
    n = (xf - x) / h;
    for (i = 1; i <= (int)n; i++)
    {
        y = y + (h * f(x, y));
        x = x + h;
    }
    printf("\n\n Result is : %f", y);
    return 0;
}
float f(float x, float y)
{
    return (1 + (x * y));
}