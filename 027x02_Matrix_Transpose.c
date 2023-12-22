/* Matrix Transpose */

#include <stdio.h>
#include <conio.h>

int main()
{
	int a[10][10], b[10][10], c[10][10], i, j, m, n, x, y, k;
	printf("\n Enter row of the Matrix: ");
	scanf("%d", &m);
	printf("\n Enter column of the Matrix: ");
	scanf("%d", &n);

	printf("\n Enter elements of the Matrix:\n");
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &a[i][j]);

	printf("\n The Matrix is:\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf(" %4d", a[i][j]);
		printf("\n");
	}

	printf("\n The Transpose matrix is :\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			b[i][j] = a[j][i];
			printf(" %4d", b[i][j]);
		}
		printf("\n");
	}
	printf("\n A*At:\n");
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			c[i][j] = 0;
			for (k = 0; k < n; k++)
				c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
		}

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf(" %4d", c[i][j]);
		printf("\n");
	}
	return 0;
}