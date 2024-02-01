/* To find the grades according to the marks obtained of the students on a particular subject using Switch Statement */

#include <stdio.h>
#include <conio.h>

void main()
{
    int m, n;

    printf("\n Enter the marks of the student: ");
    scanf("%d", &n);

    m = n / 10;

    switch (m)
    {
    case 9:
        printf("\n Grade: O, OUTSTANDING ");
        break;
    case 8:
        printf("\n Grade: E, EXCELLENT ");
        break;
    case 7:
        printf("\n Grade: A, VERY GOOD ");
        break;
    case 6:
        printf("\n Grade: B, GOOD ");
        break;
    case 5:
        printf("\n Grade: C, SATISFACTORY ");
        break;
    case 4:
        printf("\n Grade: D, STANDARD ");
        break;
    default:
        printf("\n FAIL ");
        break;
    }
    getch();
}