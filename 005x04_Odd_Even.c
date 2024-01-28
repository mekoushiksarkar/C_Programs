/* To check if the user given number is ODD or EVEN */

#include <stdio.h>
#include <conio.h>

void main()
{
    int a;
    printf("\n Enter a num: ");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("\n %d is EVEN num.", a);
    else
        printf("\n %d is ODD num.", a);
    getch();
}