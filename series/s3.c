
#include <math.h>
#include <stdio.h>

int main() {
  int f = 1, i, n, x, p;
  int sum = 0;
  printf("enter the value of n\n");
  scanf("%d", &n);
   // printf("enter the value of x\n");
  // scanf("%d", &x);
  

  for (i = 1; i <= n; i++) {
   
    // p = pow(x, i);
    p= f +f*i;
  sum= (sum +(p/i));
  }
  
  printf("%d", sum);
  return 0;
}