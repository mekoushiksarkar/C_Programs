/* Differencial */

#include <stdio.h>
#include <conio.h>
#include <math.h>
float f(float x, float y);

int main()
{
	float x[50], y[50], h, xf;
	int i, n;
	printf("Enter the initial and final values of x :");
	scanf("%f%f", &x[0], &xf);
	printf("Enter the initial value of y : ");
	scanf("%f", &y[0]);
	printf("Enter the step size : ");
	scanf("%f", &h);
	printf("\n\t\t\t**INPUT**\n");
	printf("\tThe differential equation is :\n\n");
	printf("\t\t\t y'=x^2+y^2,y(0)=0.\n");
	printf("\n\t\t\t**OUTPUT**\n");
	n = (xf - x[0]) / h;
	printf("\n\t................................................................\n");
	printf("\t\t\tx_n\t\ty_n\n");
	printf("\t................................................................\n");
	printf("\t\t\t%f\t%f\n", x[0], y[0]);
	for (i = 1; i < n; i++)
	{
		x[i + 1] = x[i] + h;
		y[i + 1] = y[i] + h * f(x[i], y[i]);
		printf("\t\t\t%f\t%f\n", x[i + 1], y[i + 1]);
	}
	printf("\n\t........................................................................\n");
	printf("\n\t\t The solution of the given differential equation at %f is %f\n", xf, y[n]);
}
float f(float x, float y)
{
	return pow(x, 2) + pow(y, 2);
}
