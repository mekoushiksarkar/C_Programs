/* Simpson's 1/3 rd Rule */

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float a, b, h, x, y, y0, yn, xn, s0, se, r;
	int i, n;
	float f(float);
	printf("\n Enter the lower limit: ");
	scanf("%f", &a);
	printf("\n Enter the upper limit: ");
	scanf("%f", &b);
	printf("\n Enter the interval: ");
	scanf("%d", &n);
	h = (b - a) / n;
	y0 = f(a);
	yn = f(b);
	x = a + h;
	s0 = 0;
	printf("\n x0 = %f\t y0 = %f ", x, y0);
	for (i = 1; i <= (n - 1); i = i + 2)
	{
		y = f(x);
		s0 = s0 + y;
		x = x + (2 * h);
		printf("\n x%d = %f\t y%d = %f ", i, x, i, y);
	}
	se = 0;
	x = a + (2 * h);
	for (i = 2; i <= (n - 2); i = i + 2)
	{
		y = f(x);
		se = se + y;
		x = x + (2 * h);
		printf("\n x%d = %f\t y%d = %f ", i, x, i, y);
	}
	printf("\n x%d = %f\t y%d = %f", n, b, n, yn);
	r = (h / 3) * (y0 + yn + (4 * s0) + (2 * se));
	printf("\n\n The result is: %f", r);
	return 0;
}
float f(float x)
{
	return (x / (1 + x));
}