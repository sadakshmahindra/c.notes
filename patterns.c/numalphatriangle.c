#include <stdio.h>

int main() {
  int n;

  printf("enter the no of rows here: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++) {
    if(i % 2 == 0) {
      for(int j = 1; j <= i; j++) {
        printf(" %d ", j);
      }
    } else{
      char a = 65;
      for(int j = 1; j <= i; j++) {
        printf(" %c ", a);
        a++;
      }
    }
    printf("\n");
  }
}

//✅ Odd rows print alphabets (A, A B C, etc.) 
//✅ Even rows print numbers (1 2, 1 2 3 4, etc.) 
//✅ Spacing is improved for better readability. 
//✅ Each element has a space (" ") to avoid clumsy output. 