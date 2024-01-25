/* To find the last digit of a number */

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, last_digit;
    printf("\n Enter the number: ");
    scanf("%d", &a);
    last_digit = a % 10;
    printf("\n The last digit is: %d", last_digit);
    getch();
}