// factorial program
#include <stdio.h>
int main() {
  int f = 1, i, n, sum = 0;
  printf("enter the value of n\n");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    f = f * i;
  }
  sum = sum + f;
  printf("%d", sum);
  return 0;
}