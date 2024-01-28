/* To check if the use given input is eligible age for vote or NOT */

#include <stdio.h>
#include <conio.h>

void main()

{
    int a;
    printf("\n Enter the age of the user: ");
    scanf("%d", &a);
    if (a >= 18)
        printf("\n User can give the vote.");
    else
        printf("\n User cannot give the vote.");

    getch();
}