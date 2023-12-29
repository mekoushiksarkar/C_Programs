/* Sum of N natural no. using "for" loop */

#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, s = 0;
    printf("\n Enter the value of N (Starts from 1): ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        s = s + i;
    }
    printf("\n SUM: %d", s);
    return 0;
}