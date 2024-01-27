/* To find the bigger number among two numbers */

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;

    printf("\n Enter first num: ");
    scanf("%d", &a);
    printf("\n Enter second num: ");
    scanf("%d", &b);

    if (a > b)
        printf("\n %d is large num.", a);
    else
        printf("\n %d is large num.", b);
    getch();
}