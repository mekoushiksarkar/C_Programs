/* Lower to Upper Case using loop */

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[80];
    int loop;
    printf("Enter a name in Lowercase: ");
    scanf("%s", name);

    for (loop = 0; name[loop] != 0; loop++)
        name[loop] = toupper(name[loop]);

    printf("The name in Uppercase is: %s", name);
    return 0;
}
