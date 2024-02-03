/* Print all Letters according to ASCII */

#include <stdio.h>
#include <conio.h>

void main()
{
    char x;
    printf("\n Print all Letters according to ASCII \n");
    for (x = 65; x <= 122; x++)
    {
        if (x > 90 & x < 97)
            continue;
        printf("| %d = %c ", x, x);
    }
    printf("|\n");
    getch();
}