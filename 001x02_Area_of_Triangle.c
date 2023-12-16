/* To find the Area of a Triangle */

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float a, b, c, s, A;
	printf("\n Enter the lengths of three sides: ");
	scanf("%f %f %f", &a, &b, &c);

	if (a + b > c && b + c > a && c + a > b)
	{
		s = (a + b + c) / 2.0;
		A = sqrt(s * (s - a) * (s - b) * (s - c));
		printf("\n The required Area is= %f square units", A);
	}
	else
		printf("\n The Triangle can not be drawn for this input");
	return 0;
}