#include <stdio.h>
int main() {
  char c;
  printf("enter the character");
  scanf("%s", &c);
  if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' ||
      c == 'e' || c == 'i' || c == 'o' || c == 'u')

    printf("vowel");
  else
    printf("consonant");
  return 0;
}