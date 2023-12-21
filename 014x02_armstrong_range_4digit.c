/* 4 Digit Armstrong Numbers between Range */

#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i = 1, t, s, r, m;
    printf("\n Enter 4 Digit number for Range:");
    scanf("%d", &m);
    while (i < m)
    {
      n = i;
      t = n;
      s = 0;
      while (n > 0)
      {
        r = n % 10;
        s = s + (r * r * r * r); // 4 digit 1634, 8208, 9474 4r required
        n = n / 10;
      }
      if (t == s)
        printf("\n % d is an armstrong number", t);
      i++;
    }
    // else
    // printf ("\n %d is not an armstrong number ",t);
    return 0;
}