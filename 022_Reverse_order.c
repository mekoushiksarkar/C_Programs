/* Elements in Reverse Order */

#include <stdio.h>
#include <conio.h>

int main()
{
    int a[20], c, y;
    printf("\n Enter dimension: ");
    scanf("%d", &y);
    printf("\n Enter %d values: \n", y);
    for (c = 1; c <= y; c++)
        scanf("%d", &a[c]);
    printf("\n Elements of array: \n");
    for (c = 1; c <= y; c++)
        printf(" %d\t", a[c]);
    printf("\n Printing in reverse order: \n");
    for (c = y; c > 0; c--)
        printf(" %d\t", a[c]);
    return 0;
}
