/* Even no. in given Range */

#include <stdio.h>
int main()
{
   int n,i=2;
   printf("\n Enter range from 0 to : ");
   scanf("%d", &n);
   while(i<=n)
   {
      printf("\n The even numbrs are: %d",i);
      i=i+2;
   }
   return 0;
}
