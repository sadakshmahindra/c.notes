#include <stdio.h>

int main() {
  int n;

  printf("please enter the no of rows here: ");
  scanf("%d", &n);
  
  int num = 1;
  for(int i = 1; i <= n; i++) {
    for(int j =1; j <= i; j++) {
        printf(" %d ", num);
         num += 2;
    }
    printf("\n");
  }
}