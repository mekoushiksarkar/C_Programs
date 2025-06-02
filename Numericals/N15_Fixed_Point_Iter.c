/* Fixed Point Iteration */

#include <stdio.h>
#include <conio.h>
#include <math.h>

#define ESP 0.0001
#define F(x) (x) * (exp(x)) = 1
#define X(x) (exp(-x))
#define G(x) -(exp(x))

int main()
{
	float x1, x2, x;
	int i = 1;
	do
	{
		printf("\n Enter the value of x: ");
		scanf("%f", &x);
	} while (fabs(G(x)) > 1);
	x1 = X(x);
	printf("\n x= %f", x1);
	printf("\n\n");
	do
	{
		x2 = X(x);
		if (fabs(x1 - x2) < ESP)
		{
			printf("\n\n REAL ROOT= %.3f", x1);
			i = 0;
		}
		else
		{
			x1 = x2;
		}
		if (i == 1)
		{
			printf("\n x = %f", x1);
			printf("\n\n");
		}
	} while (i != 0);
	return 0;
}