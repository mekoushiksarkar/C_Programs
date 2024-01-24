/* Addition-Subtraction-Multiplication-Division in One Prog */

#include <stdio.h>
#include <conio.h>

void main()
{
    float a, b, add, sub, div, multi;
    printf("\n Enter the two numbers: ");
    scanf("%f %f", &a, &b);
    add = a + b;
    sub = a - b;
    div = a / b;
    multi = a * b;
    printf("\n Addition of two numbers: %f", add);
    printf("\n Subtraction of two numbers: %f", sub);
    printf("\n Division of two numbers: %f", div);
    printf("\n Multiplication of two numbers: %f", multi);
    getch();
}