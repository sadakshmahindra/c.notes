#include <stdio.h>

int main() {
  char gender;
  printf("please enter your gender?(m/f): ");
  scanf(" %c", &gender);

  gender == 'm' ? printf("male") : printf("female");

  return 0;
}