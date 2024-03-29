/* Gauss Scidel Method */

#include <stdio.h>
#include <math.h>

#define ESP 0.0001
#define x1(x2, x3) ((17 - 20 * (x2) + 2 * (x3)) / 20)
#define x2(x1, x3) ((-18 - 3 * (x1) + (x3)) / 20)
#define x3(x1, x2) ((25 - 2 * (x1) + 3 * (x2)) / 20)

int main()
{
	double x1 = 0, x2 = 0, x3 = 0, y1, y2, y3;
	int i = 0;
	printf("\n___________________________________________\n");
	printf("\n   x1\t\t   x2\t\t   x3\t\t\n");
	printf("\n___________________________________________\n");
	printf("\n%f\t%f\t%f", x1, x2, x3);
	do
	{
		y1 = x1(x2, x3);
		y2 = x2(y1, x3);
		y3 = x3(y1, y2);
		if (fabs(y1 - x1) < ESP && fabs(y2 - x2) < ESP && fabs(y3 - x3) < ESP)
		{
			printf("\n_________________________________________\n");
			printf("\n\nx1 = %.3lf", y1);
			printf("\n\nx2 = %.3lf", y2);
			printf("\n\nx3 = %.3lf", y3);
			i = 1;
		}
		else
		{
			x1 = y1;
			x2 = y2;
			x3 = y3;
			printf("\n%f\t%f\t%f", x1, x2, x3);
		}
	} while (i != 1);
	return 0;
}