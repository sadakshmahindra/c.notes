#include <stdio.h>

int main() {
  int n;

  printf("please enter the no of ros here: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) { 
      if(i == j || (i + j) == (n + 1)) {
      printf("*");
      }else {
      printf(" ");
      }
    } 
    printf("\n");
  }
  return 0;
}


//✅ i == j → prints the main diagonal (\ shape).
//✅ i + j == n + 1 → prints the secondary diagonal (/ shape).
//✅ Together, they form an "X" shape!