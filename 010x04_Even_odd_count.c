/* Even and Odd Count in Range */

#include <stdio.h>
int main()
{
	int i, n, ec = 0, oc = 0;
	printf("\n Enter the range: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			printf(" %4d", i);
			ec++;
			printf("\n");
		}
		else
		{
			printf(" %4d", i);
			oc++;
		}
	}
	printf("\n Odd number present= %d", oc);
	printf("\n Even number present= %d", ec);
	return 0;
}