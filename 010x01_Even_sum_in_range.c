/* Sum of Even numbers in range */

#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i = 2;
    double sum = 0;
    printf("\n Enter Range: ");
    scanf("%d", &n);
    
    while (i <= n)
    {
        printf("\n The Even number are: %d", i);
        sum = sum + i;
        // printf("\n Sum: %d",sum);
        i = i + 2;
    }
    printf("\n Sum: %lf", sum);
    return 0;
}