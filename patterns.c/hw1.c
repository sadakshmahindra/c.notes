#include <stdio.h>

int main() {
  int n, m;

  printf("enter the no of rows here: ");
  scanf("%d", &n);

  printf("enter the no of columns here: ");
  scanf("%d", &m);
  
  for (int i =1; i <= 4; i++) { 
  for (int i =1; i <= 4; i++) {
    printf("*");
    } 
    printf("\n"); // har line ke baad enter maarne ke liye hai
  }
  return 0;
}