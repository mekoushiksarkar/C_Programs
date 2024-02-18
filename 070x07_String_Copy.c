/* String Copy Using fn */

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char s1[20], s2[20];
    printf("\n Enter the 1st string: ");
    gets(s1);
    printf("\n Enter the 2nd string: ");
    gets(s2);

    strcpy(s1, s2);
    
    printf("\n After copying the first string : %s", s1);
    getch();
}