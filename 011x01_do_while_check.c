/* do-while checking */

#include <stdio.h>
#include <conio.h>

int main()
{
  int a = 12, b = 10;
  do
  {
    printf("\n a= %d, b= %d", a, b);
    a--;
  } while (a > b);
  return 0;
}