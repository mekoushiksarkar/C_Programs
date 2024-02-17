/* String Concatenation Using fn */

#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char s1[10], s2[10];
    printf("\n Enter the first part of your name: ");
    gets(s1);
    printf("\n Enter the second part of your name: ");
    gets(s2);
    strcat(s1, s2);
    printf("\n After concatenation string is: ");
    puts(s1);
    getch();
}