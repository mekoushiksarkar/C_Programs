/* To make a calculator using Switch Statement */

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, s, i;

    printf("\n Enter the first num: ");
    scanf("%d", &a);
    printf("\n Enter the second num: ");
    scanf("%d", &b);

    printf("\n ...Menu...\n 1 for ADDITION \n 2 for SUBTRACTION \n 3 for MULTIPLICATION \n 4 for DIVISION \n Enter your choice: ");
    scanf("%d", &i);

    switch (i)
    {
    case 1:
        s = a + b;
        break;
    case 2:
        s = a - b;
        break;
    case 3:
        s = a * b;
        break;
    case 4:
        s = a / b;
        break;
    default:
        printf("\n WRONG CHOICE");
        break;
    }
    printf("\n The result is %d", s);
    getch();
}