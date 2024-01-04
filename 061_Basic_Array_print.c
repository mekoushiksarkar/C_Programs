/* Basic Array */

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, a[5];
    printf("\n Enter Elements:\n");
    for (i = 0; i < 5; i++)
    {
        printf("\n %d Element: ", i);
        scanf("%d", &a[i]);
    }
    printf("\n ---Print Elements---\n");
    for (i = 0; i < 5; i++)
    {
        printf("\n a[%d] = %d", i, a[i]);
    }
    return 0;
}