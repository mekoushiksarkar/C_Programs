/* To check Leap year or NOT*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int year;
    printf("\n Enter a year with 4 digits: ");
    scanf("%d", &year);
    if(year % 4==0 && year % 100 !=0||year%400==0)
        printf("\n The year %d is a leap year.",year);
    else
        printf("\n The year %d is not a leap year.",year);
    return 0;
}