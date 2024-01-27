/* To find the biggest number among the three numbers */

#include <stdio.h>
#include <conio.h>

void main()

{
    int a, b, c;

    printf("\n Enter the first num: ");
    scanf("%d", &a);
    printf("\n Enter the second num: ");
    scanf("%d", &b);
    printf("\n Enter the third num: ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
            printf("\n %d is large.", a);
        else
            printf("\n %d is large.", c);
    }
    else
    {
        if (b > c)
            printf("\n %d is large.", b);
        else
            printf("\n %d is large.", c);
    }
    getch();
}