#include <stdio.h>

int main() {
 
 int num = 0;
 while (num != 10) {
  printf("please enter a number here: ");
  scanf("%d", &num);
 }

 printf("you have guessed the number right");

 return 0;
}