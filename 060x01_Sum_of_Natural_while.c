/* Sum of N natural no. using "while" loop */

#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, sum;
    printf("\n Enter the value of N (Starts from 1): ");
    scanf("%d", &n);
    sum = 0;
    i = 1;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("\n Sum: %d", sum);
    return 0;
}