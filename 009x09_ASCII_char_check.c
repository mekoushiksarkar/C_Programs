/* ASCII character Check */

#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;
    printf("\n Enter a character from the keyboard: ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90)
        printf("\n The  character is upper case letter.");
    if (ch >= 97 && ch <= 122)
        printf("\n The character is lower case letter.");
    if (ch >= 48 && ch <= 57)
        printf("\n The character is digit.");
    if ((ch >= 0 && ch <= 48) || (ch > 57 && ch < 65) || (ch > 90 && ch < 97) || (ch > 122))
        printf("\n The character is special Character.");
    getch();
}