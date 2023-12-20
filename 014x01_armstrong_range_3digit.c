/* 3 Digit Armstrong Numbers between Range */

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n, t, s, r, range;
    printf("\n Enter Range(3 digits): ");
    scanf("%d", &range);
    // t=n;
    // s=0;
    for (i = 1; i <= range; i++)
    {
        n = i;
        t = n;
        s = 0;
        while (n > 0)
        {
            r = n % 10;
            s = s + (r * r * r);
            n = n / 10;
        }
        if (t == s)
            printf("\n %d", t);
    }
    // if(t==s)
    //  printf("\n %d is an Amstrong number",t);
    // else
    //  printf("\n %d is not an Amstrong number",t);
    return 0;
}
