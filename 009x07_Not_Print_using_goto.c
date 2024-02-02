/* 1 2 3 5 6 7 8 10 ... */

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, n;
    printf("\n Enter range: ");
    scanf("%d", &n);
    
    i = 1;
    while (i <= n)
    {
        if (i == 4 || i == 9)
            goto ll;
        else
            printf("%4d", i);
    ll:
        i++;
    }
    getch();
}