/* Prime no. in Range */

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, a, b, n, c = 0;
    printf("\n Enter the range: ");
    scanf("%d", &n);
    printf("\n Prime numbers are: ");
    a = 1;
    
    while (a <= n)
    {
        b = 1;
        c = 0;
        while (b <= a)
        {
            if (a % b == 0)
                c = c + 1;
            b++;
        }
        if (c == 2)
            printf("\t %d", a);
        a++;
    }
    return 0;
}
