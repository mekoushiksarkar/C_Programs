/* To find Length of String */

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char sname[100];
    int i = 0;
    printf("\n Enter the string: ");
    gets(sname);
    while (sname[i] != '\0')
        i++;
    printf("\n The lenth of the string is: %d", i);
    return 0;
}