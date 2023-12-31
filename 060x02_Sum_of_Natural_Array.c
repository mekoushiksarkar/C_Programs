/* SUM of N given numbers using "Array" */

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n;
    float a[100], s;
    printf("\n Enter how many numbers to add: ");
    scanf("%d", &n);
    printf("\n Enter the %d numbers:\n", n);
    for (i = 1; i <= n; i++)
        scanf("%f", &a[i]);
    s = 0;
    for (i = 1; i <= n; i++)
        s = s + a[i];
    printf("\n The sum of %d numbers is: %f", n, s);
    return 0;
}