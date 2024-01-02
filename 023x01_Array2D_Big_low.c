/* Find Highest and Lowest value using 2-D Array */

#include <stdio.h>
#include <conio.h>

int main()
{
	int a[10][10], n, i, j, big, low;
	printf("\n Enter the dimension: ");
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("\n a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	big = 0;
	low = 0;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (a[i][j] > big)
				big = a[i][j];
			if (a[i][j] < low)
				low = a[i][j];
		}
	}
	printf("\n Big = %d, Low = %d", big, low);
	return 0;
}