/* Program for Ascending order of given no. */

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a[100];
    int i, j, k, r, t;
    long n;
    printf("\n Enter Number to reorder : ");
    scanf("%ld", &n);
    printf("\n The given number is : %ld", n);

    k = 0;
    while (n > 0)
    {
        r = n % 10;
        a[k] = r;
        k++;
        n = n / 10;
    }

    for (i = 0; i < k; i++)
    {
        for (j = i + 1; j < k; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    
    printf("\n The Ascending order of the number is : ");
    for (i = 0; i < k; i++)
        printf("%d", a[i]);
    return 0;
}