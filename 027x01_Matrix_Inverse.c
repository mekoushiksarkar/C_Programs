/* Matrix Inverse and Determinant */

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int i, j;
    float a[3][3], inv[3][3], det, p, r, q, s, t, u, v, w, x;
    printf("\n Enter the elements of the 3x3 Matrix:\n");
    {
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                scanf("%f", &a[i][j]);
        }
        det = (a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2]))) - (a[0][1] * ((a[1][0] * a[2][2]) - (a[2][0] * a[1][2]))) + (a[0][2] * ((a[1][0] * a[2][1]) - (a[1][1] * a[2][0])));
    }

    printf("\n The Matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf(" %6.2f", a[i][j]);
        printf("\n");
    }

    printf("\n The Determinant of the Matrix: %.2f", det);

    if (det == 0)
    {
        printf("\n\n The Inverse of the Matrix cannot be determine.\n\n");
        return 0;
    }
    else
    {
        inv[0][0] = ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2]));
        inv[0][1] = -((a[0][1] * a[2][2]) - (a[2][1] * a[0][2]));
        inv[0][2] = ((a[0][1] * a[1][2]) - (a[1][1] * a[0][2]));
        inv[1][0] = -((a[1][0] * a[2][2]) - (a[2][0] * a[1][2]));
        inv[1][1] = ((a[0][0] * a[2][2]) - (a[2][0] * a[0][2]));
        inv[1][2] = -((a[0][0] * a[1][2]) - (a[1][0] * a[0][2]));
        inv[2][0] = ((a[1][0] * a[2][1]) - (a[2][0] * a[1][2]));
        inv[2][1] = -((a[0][0] * a[2][1]) - (a[2][0] * a[0][1]));
        inv[2][2] = ((a[0][0] * a[1][1]) - (a[1][0] * a[0][1]));
    }

    printf("\n\n The inverse of the matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf(" %6.2f", inv[i][j]);
        printf("\n");
    }
    return 0;
}