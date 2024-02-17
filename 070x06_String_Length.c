/* String Length Using fn */

#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char s1[20];
    int x;
    printf("\n Enter the string: ");
    gets(s1);
    x = strlen(s1);
    printf("\n Length of the given string is : %d", x);
    getch();
}