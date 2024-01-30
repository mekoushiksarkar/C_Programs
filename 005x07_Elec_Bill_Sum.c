/* Electric Bill Summary */

#include <stdio.h>
#include <conio.h>

void main()

{
    int n;
    float s;

    printf("\n Enter the unit of current: ");
    scanf("%d", &n);

    if (n >= 0 && n <= 100)
        printf("\n Bill is 150");
    else if (n >= 101 && n <= 200)
    {
        s = 150 + (n - 100) * 2.50;
        printf("\n Bill is %f", s);
    }
    else if (n >= 201 && n <= 300)
    {
        s = 150 + 100 * 2.50 + (n - 200) * 3;
        printf("\n Bill is %f", s);
    }
    else
    {
        s = 150 + 100 * 2.50 + 100 * 3 + (n - 300) * 4.50;
        printf("\n Bill is %f", s);
    }
    getch();
}