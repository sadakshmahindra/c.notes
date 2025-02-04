#include <stdio.h>

int main() {
  int n;

  printf("enter the no of rows here: ");
  scanf("%d", &n);
   
  for(int i = 1;  i <= n; i++) {
    char a = 65;
    for(int j = 1; j <= n; j++) {
      printf(" %c ", a);
      a++;
    }
    printf("\n");
  }
}


// hint : use ASCII values;