/* Find the value of SIN(X) */

#include <stdio.h>
#include <math.h>

int main()
{
	int n = 1;
	float x, y, term, sum;
	printf("\n Enter the value of x: ");
	scanf("%f", &x);
	y = x * 22 / (7 * 180);
	sum = y;
	term = y;
	while (fabs(term) > 0.00001)
	{
		term = term * (-1) * y * y / (2 * n * (2 * n + 1));
		//printf("\n t=%f", term);
		sum = sum + term;
		printf("\n %f", sum);
		n = n + 1;
	}
	printf("\n The required value of sinx for x = %f is : %f", x, sum);
	return 0;
}