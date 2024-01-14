/* Trapezoidal Rule with 6 Intervals */

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float a, b, h, x, y, y0, yn, xn, r, s, n, i;
    float f(float);
    printf("\n\n Enter the lower limit : ");
    scanf("%f", &a);
    printf("\n\n Enter the upper limit : ");
    scanf("%f", &b);
    printf("\n\n Enter the interval : ");
    scanf("%f", &n);
    h = (b - a) / n;
    y0 = f(a);
    yn = f(b);
    x = a + h;
    s = 0;
    for (i = 1; i <= (n - 1); i++)
    {
        printf("\n y%d : %f", i, s);
        y = f(x);
        s = s + y;
        x = x + h;
    }
    r = (h / 2) * ((y0 + yn) + (2 * s));
    printf("\n\n The result is : %f", r);
    return 0;
}
float f(float x)
{
    return (1 / (1 + x * x)); // return (4*x-(3*x*x))
}
