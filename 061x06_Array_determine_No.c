/* Check Number is present or NOT in an Array */

#include <stdio.h>
#include <conio.h>

void main()
{
    int x[30], size, i, m, n = 0;

    printf("\n Enter Array Size: ");
    scanf("%d", &size);

    printf("\n Enter the value of array: ");
    for (i = 0; i < size; i++)
    {
        printf("\n x[%d]= ", i);
        scanf("%d", &x[i]);
    }
    printf("\n Enter the value which are you find: ");
    scanf("%d", &m);

    for (i = 0; i < size; i++)
    {
        if (m == x[i])
            n = 1;
        else
            continue;
    }
    if (n == 1)
        printf("\n Yes! the Number has been entered.");
    else
        printf("\n Sorry! the Number has not been entered.");
    getch();
}