/* To find Squareroot and count number using "while" loop */

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int n, c;
    double x, sq;

    printf("\n Enter 0 to stop the program.");
    c = 1;
    n = 0;
    while (c <= 5)
    {
        printf("\n -------------------------");
        printf("\n Enter number: ");
        scanf("%lf", &x);
        if (x == 0)
            break;
        if (x < 0)
        {
            printf("\n The given number is negative.");
            n++;
            continue;
        }
        sq = sqrt(x);
        printf("\n Number = %lf \n squareroot =%lf", x, sq);
        c++;
    }
    printf("\n -------------------------");
    printf("\n Number of items done= %d ", c);
    printf("\n Negative items = %d ", n);
    printf("\n End of data \n");
    getch();
}
