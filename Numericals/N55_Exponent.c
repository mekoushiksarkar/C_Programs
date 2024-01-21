/* Find the value of e^x */

#include <stdio.h>
#include <math.h>

int main()
{
	int i = 1;
	float x, sum = 1, term = 1;
	printf("\n Enter the value of x: ");
	scanf("%f", &x);
	do
	{
		term = term * x / i;
		sum = sum + term;
		i = i + 1;
	} while (fabs(term) > 0.00001);
	printf("\n Sum of e^%f is : %8.4f,correct upto 4 decimal places.", x, sum);
	return 0;
}