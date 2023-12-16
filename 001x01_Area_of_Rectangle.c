/* Area and Perimeter of a Rectangle */

#include <stdio.h>
#include <conio.h>

int main()
{
    float no1, no2, peri, area;
    printf("\n Length of the rectangle: ", no1);
    scanf("%f", &no1);
    printf("\n Width of the rectangle: ", no2);
    scanf("%f", &no2);
    peri = 2 * (no1 + no2);
    area = no1 * no2;
    printf("\n Perimeter of the Rectangle: %.4f", peri);
    printf("\n Area of the Rectangle: %.4f", area);
    return 0;
}