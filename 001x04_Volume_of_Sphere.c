/* Volume of Sphere */

#include <stdio.h>
#include <conio.h>

int main()
{
    float R, sur, vol;
    printf("\n Enter Radius of the sphere: ");
    scanf("%f", &R);
    sur = 4 * 3.14 * R * R;
    vol = (4 * 3.14 * R * R * R) / 3;
    printf("\n Surface of the Sphere: %.2f", sur);
    printf("\n Volume of the Sphere: %.2f", vol);
    return 0;
}