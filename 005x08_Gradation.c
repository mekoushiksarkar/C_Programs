/* To find the Grades according to the marks of the students */

#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    printf("\n Enter the number of the students: ");
    scanf("%d", &n);

    if (n >= 91 && n <= 100)
        printf("\n Grade: O, OUTSTANDING");

    else if (n >= 81 && n <= 90)
        printf("\n Grade: E, EXCELLENT");

    else if (n >= 71 && n <= 80)
        printf("\n Grade: A, VERY GOOD");

    else if (n >= 61 && n <= 70)
        printf("Grade: B, GOOD");

    else if (n >= 51 && n <= 60)
        printf("\n Grade: C, SATISFACTORY");

    else if (n >= 41 && n <= 50)
        printf("\n Grade: D, STANDARD");

    else
        printf("\n FAIL");
    getch();
}