#include <math.h>
#include <stdio.h>

int main() {
  int f = 1, i, n, x, p,sign=-1;
  float sum = 0.0;
  printf("enter the value of n\n");
  scanf("%d", &n);
 for(i=1;i<=n;i++)
   {
     p=p+i*(i+1)*(i+2);
   }
  printf("%d",p);
  return 0;
}