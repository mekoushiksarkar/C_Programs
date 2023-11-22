#include <stdio.h>
#include <conio.h>
int main()
{
    float r,A,p;
    //clrscr();
    printf("\n Enter a radius: ");
    scanf("%f",&r);
    A=(22.0/7.0)*r*r;
    p=2*(22.0/7.0)*r;
    printf("\n The area and perimeter is: %f and %f", A, p);
    return 0;
}
