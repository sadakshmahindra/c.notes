#include <stdio.h>

int main() {
  int num;
  printf("welcome to the printing tables\n\n");
  input:
  printf("please enter the number here: ");
  scanf("%d", &num);


  for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", num, i, num * i);
    if (i == 5) {
      break;
    }
  }

  return 0;
  
}