/* String Pattern */

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    int i, j, x = 0;
    char s1[10];

    printf("\n Enter the String: ");
    gets(s1);

    while (s1[x] != '\0')
    {
        x++;
    }
    for (i = 0; i < x; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c ", s1[j]);
        }
        printf("\n");
    }
    getch();
}