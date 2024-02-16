/* Find Length of String without string fn */

#include <stdio.h>
#include <conio.h>

void main()
{
    char s1[20];
    int x = 0;

    printf("\n Enter a string : ");
    gets(s1);

    while (s1[x] != '\0')
    {
        x++;
    }
    printf("\n Length of the string= %d", x);

    getch();
}