/* Find Spaces of String without string fn */

#include <stdio.h>
#include <conio.h>

void main()
{
    char s1[20];
    int x = 0, c = 0;

    printf("\n Enter a string : ");
    gets(s1);

    while (s1[x] != '\0')
    {
        if (s1[x] == ' ')
            c++;
        x++;
    }
    printf("\n Space within given string = %d", c);
    getch();
}