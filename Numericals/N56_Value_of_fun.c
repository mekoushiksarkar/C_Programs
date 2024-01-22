/* Programme to find the value of a function (f = (x^4 + 2*r! + r + 1) * r!) at a point */

#include <stdio.h>
#include <conio.h>
#include <math.h>

float function(float, int);
int fact(int);

int main()
{
	int i, r, n;
	float x, t, f;
	printf("\n Put the value of x: ");
	scanf("%f", &x);
	printf("\n Put the value of r: ");
	scanf("%d", &r);
	t = function(x, r) * fact(r);
	printf("\n Value of the function is: %f", t);
	return 0;
}

float function(float x, int r)
{
	float f;
	f = pow(x, 4) + 2 * fact(r) + r + 1;
	return (f);
}

int fact(int r)
{
	int i, value = 1;
	for (i = 1; i <= r; i++)
		value = value * i;
	return (value);
}