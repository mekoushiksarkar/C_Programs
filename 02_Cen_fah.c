/* To find Fahrenheit to Celsius*/

#include<stdio.h>
#include<conio.h>
int main()
{
    float F,C;
    printf("\n Enter a Fahrenheit temperature: ");
    scanf("%f", &F);
    C=5.0/9.0*(F-32);
    printf("\n The temperature in Celsius is: %f",C);
    return 0;
}
