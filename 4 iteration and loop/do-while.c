#include <stdio.h>

int main() {
 
 int num;
 do {
  printf("please enter a number here: ");
  scanf("%d", &num);
 } while (num != 10);

 printf("you have guessed the number right");

 return 0;
}