#include <stdio.h>

int main() {
  int num = 1;
  while (num <= 10) {
    printf("%d\n", num);
    num = num + 1;
  }

  printf("first loop has been ended\n");

  int num2 = 10;
  while (num2 > 0) {
    printf("%d\n", num2);
    num2--;
  }

  printf("second loop has been ended\n");

  return 0;
}