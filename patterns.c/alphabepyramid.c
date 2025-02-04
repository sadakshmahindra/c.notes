#include <stdio.h>

int  main() {
  int n;

  printf("enter the no of rows here: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n - i; j++) {
      printf(" ");
      }  
      char a = 'A';
      for(int k = 1; k <= 2 * i - 1; k++) {
        printf(" %c", a);
         a++;
    }
    printf("\n");
  }
  return 0;
}