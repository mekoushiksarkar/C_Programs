/* String Compare Using fn */

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char s1[10], s2[10];
    int i;
    printf("\n Enter the first string: ");
    gets(s1);
    printf("\n Enter the second string: ");
    gets(s2);
    
    i = strcmp(s1, s2);
    if (i == 0)
        printf("\n String are equal ");
    else
        printf("\n Strings are unequal");
    getch();
}