#include <stdio.h>

int main() {
  int n;

  printf("enter the no of rows here: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++) {
    int q = i - 1;

    for(int l = 1; l <= n - i; l++) {
      printf(" ");
    }

    for(int j = 1; j <= i; j++) {
      printf("%d", j);
    } 

    for(int k = q; k >= 1; k--) {
      printf("%d", q);
      q--;  
    }

    printf("\n");
  }

  return 0;
}
