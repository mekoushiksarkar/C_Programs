/* To find the Position of three numbers */

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
        {
            if (b > c)
                printf("\n %d is max \n %d is middle \n %d is small.", a, b, c);
            else
                printf("\n %d is max \n %d is middle \n %d is small.", a, c, b);
        }
        else
            printf("\n %d is max \n %d is middle \n %d is small.", c, a, b);
    }
    else
    {
        if (b > c)
        {
            if (a > c)
                printf("\n %d is max \n %d is middle \n %d is small.", b, a, c);
            else
                printf("\n %d is max \n %d is middle \n %d is small.", b, c, a);
        }
        else
            printf("\n %d is max \n %d is middle \n %d is small.", c, b, a);
    }

    getch();
}