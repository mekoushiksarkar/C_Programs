/* To check No. is Prime or NOT */

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, n;
    int c = 0;
    printf("\n Enter the No.: ");
    scanf("%d", &n);
    if (n != 1 || n != 2)
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                c = 1;
                break;
            }
        }
    if (c == 0)
        printf("\n The given number %d is Prime.", n);
    else
        printf("\n The given number %d is NOT Prime.", n);

    getch();
}