/* Floating number Product */

#include <stdio.h>
#include <conio.h>

int main()
{
    float a, b, c;
    printf("\n Enter 1st Number: ");
    scanf("%f", &a);
    printf("\n Enter 2nd Number: ");
    scanf("%f", &b);
    c = a * b;
    printf("\n Product: %.2f", c);
    return 0;
}