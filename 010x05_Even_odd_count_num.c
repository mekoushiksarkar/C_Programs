/* Even and Odd Count in a Number */

#include <stdio.h>
int main()
{
    int i, r, n, oc = 0, ec = 0;
    printf("\n Enter the number= ");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        if (r % 2 != 0)
            oc++;
        else
            ec++;
        n = n / 10;
    }
    printf("\n Odd number present= %d", oc);
    printf("\n Even number present= %d", ec);
    return 0;
}