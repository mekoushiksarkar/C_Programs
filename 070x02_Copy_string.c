/* Copy String without string fn */

#include <stdio.h>
#include <conio.h>
int main()
{
    char s1[15], s2[15];
    int i = 0;

    printf("\n Enter a string: ");
    gets(s1);

    printf("\n Your entered string is: ");
    puts(s1);

    while (s1[i] != '\0')
    {
        s2[i] = s1[i];
        i = i + 1;
    }
    s2[i] = '\0';
    printf("\n After copy second strings are: ");
    puts(s2);
    return 0;
}