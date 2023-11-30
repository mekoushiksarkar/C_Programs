#include <stdio.h>
#include <math.h>

int fac(int x)
{
	int i,fac=1;
	for(i=1;i<=x;i++)
		fac=fac*i;
	return fac;
}

int main()
{
	float x,Q,sum=0;
	int i,j,limit;

	printf("Enter the value of x of sinx series: ");
	scanf("%f",&x);

	printf("Enter the limit upto which you want to expand the series: ");
	scanf("%d",&limit);

	Q=x;
	x = x*(3.1415/180);

	for(i=1,j=1;i<=limit;i++,j=j+2)
	{
		if(i%2!=0)
		{
			sum=sum+pow(x,j)/fac(j);
		}
		else
			sum=sum-pow(x,j)/fac(j);
	}

	printf("Sin(%0.1f): %f",Q,sum);
	return 0;
}



/*
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
void main()
{
    int n, x1;
    float accuracy, term, denominator, x, sinx, sinval;
 
    printf("Enter the value of x (in degrees) \n");
    scanf("%f", &x);
    x1 = x;
    //  Converting degrees to radians 
    x = x * (3.142 / 180.0);
    sinval = sin(x);
    printf("Enter the accuracy for the result \n");
    scanf("%f", &accuracy);
    term = x;
    sinx = term;
    n = 1;
    do
    {
        denominator = 2 * n * (2 * n + 1);
        term = -term * x * x / denominator;
        sinx = sinx + term;
        n = n + 1;
    } while (accuracy <= fabs(sinval - sinx));
    printf("Sum of the sine series = %f \n", sinx);
    printf("Using Library function sin(%d) = %f\n", x1, sin(x));
}

*/