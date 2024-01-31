/* Menu driven C program to make a Calculator */

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, s, i;

    printf("\n Enter the first num: ");
    scanf("%d", &a);
    printf("\n Enter the second num: ");
    scanf("%d", &b);

    printf("\n ... Menu...\n 1 for ADDITION \n 2 for SUBTRACTION \n 3 for MULTIPLICATION \n 4 for DIVISION \n Enter your choice: ");
    scanf("%d", &i);

    if (i == 1)
        s = a + b;
    else if (i == 2)
        s = a - b;
    else if (i == 3)
        s = a * b;
    else if (i == 4)
        s = a / b;
    else
        printf("\n You entered wrong input.");

    printf("\n The result is %d", s);
    getch();
}