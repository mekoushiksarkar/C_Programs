/* Regula-Falsi Method */

#include <stdio.h>
#include <conio.h>
#include <math.h>

#define ESP 0.0001
#define F(x) 3 * (x)-1 - cos(x) // sin(x) + cos(x) - 1

int main()
{
	float x0, x1, x2, f0, f1, f2;
	do
	{
		printf("\n Enter the value of x0: ");
		scanf("%f", &x0);
	} while (F(x0) > 0);
	do
	{
		printf("\n Enter the value of x1: ");
		scanf("%f", &x1);
	} while (F(x1) < 0);
	printf("\n_________________________________________________\n");
	printf("\n   x0    \t x1    \t x2     \tf0     \t f1    \t f2");
	printf("\n_________________________________________________\n");
	do
	{
		f0 = F(x0);
		f1 = F(x1);
		x2 = x0 - ((f0 * (x1 - x0)) / (f1 - f0));
		f2 = F(x2);
		printf("\n %f   %f   %f   %f   %f   %f", x0, x1, x2, f0, f1, f2);
		if (f0 * f2 < 0)
		{
			x1 = x2;
		}
		else
		{
			x0 = x2;
		}
	} while (fabs(f2) > ESP);
	printf("\n_________________________________________________\n");
	printf("\n\nApp.root = %f", x2);
	return 0;
}