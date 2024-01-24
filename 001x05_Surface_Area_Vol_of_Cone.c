/* To find the Surface Area and Volume of Cone */

#include <stdio.h>
#include <conio.h>

int main()
{
    float r, h, l, s_area, volume;
    printf("\n Enter the radius: ");
    scanf("%f", &r);
    printf("\n Enter the height: ");
    scanf("%f", &h);
    printf("\n Enter the slant height: ");
    scanf("%f", &l);
    s_area = 3.14 * r * r + 3.14 * r * l;
    volume = 3.14 * r * r * h / 3;
    printf("\n Surface area of the cone: %f", s_area);
    printf("\n Volume of the cone: %f", volume);
    return 0;
}