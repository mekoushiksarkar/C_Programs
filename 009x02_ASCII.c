/* Convert to ASCII */

#include <stdio.h>

int main()
{
    int a;
    printf("\n Enter a charecter: ");
    a = getchar();
    printf("\n The ASCII value of '%c' is: %d ", a, a);
    return 0;
}