#include <stdio.h>

int main() {
  int n, m;

  printf("enter the no of rows here: ");
  scanf("%d", &n);

  printf("enter the no of columns here: ");
  scanf("%d", &m);
  
  for (int i =1; i <= n; i++) { // outer loop --> no of lines = no of rows
  for (int i =1; i <= m; i++) {  // inner loop --> no of stars in each line = no of columns
    printf("*");
    } 
    printf("\n"); // har line ke baad enter maarne ke liye hai
  }
  return 0;
}