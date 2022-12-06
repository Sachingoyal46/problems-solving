#include <stdio.h>
int main() {
  int day, year, month, c, m, n, y, add, result;
  printf("enter the day , month and year respectivily");
  scanf("%d%d%d", &day, &month, &year);

  if (2000 <= year && year <= 2099) {
    c = 6;
  }
  if (1900 <= year && year <= 1999) {
    c = 0;
  }

  switch (month) {

  case 1:
    m = 0;
    break;
  case 2:
    m = 3;
    break;
  case 3:
    m = 3;
    break;
  case 4:
    m = 6;
    break;
  case 5:
    m = 1;
    break;
  case 6:
    m = 4;
    break;
  case 7:
    m = 6;
    break;
  case 8:
    m = 2;
    break;
  case 9:
    m = 5;
    break;
  case 10:
    m = 0;
    break;
  case 11:
    m = 3;
    break;
  case 12:
    m = 5;
    break;
  default:
    printf("invalid month");
  }

  if (2000 <= year && year <= 2099) {
    y = (year % 2000); // last two digit
  }
  if (1900 <= year && year <= 1999) {
    y = (year % 1900); // last two digits
  }
  if (year % 4 == 0) {
    n = (y - 1) / 4; // for leap year
  } else
    n = y / 4; // for non leap year

  add = (day + c + m + y + n); // formula
  result = (add % 7);

  switch (result) {
  case 0:
    printf("sunday/n");
    break;
  case 1:
    printf("monday/n");
    break;
  case 2:
    printf("tuesday/n");
    break;
  case 3:
    printf("wednesday/n");
    break;
  case 4:
    printf("thursday/n");
    break;
  case 5:
    printf("friday/n");
    break;
  case 6:
    printf("saturday/n");
    break;
  default:
    printf("not valid");
  }

  return 0;
}
