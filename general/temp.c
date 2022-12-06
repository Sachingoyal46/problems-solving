#include <stdio.h>
int main() {
  int temp;
  printf("enter the value of temperature:");
  scanf("%d", &temp);

  if (temp < 0)
    printf("freezing wheather");
  else if (temp >= 0 && temp <= 10)
    printf("very cold wheather");
  else if (temp >= 20 && temp <= 30)
    printf("normal wheather");
  else if (temp >= 30 && temp <= 40)
    printf("hot wheather");
  else
    printf("very hot wheather");
  return 0;
}
