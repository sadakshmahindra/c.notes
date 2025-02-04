#include <stdio.h>

int main() {
  int n;
`
  printf("enter no of rows: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++) { // no of rows is represented by 'i' and columns by 'j'
    for(int j = 1; j <= n; j++) { // i ke baad nested lloops main hamesha 'j' ka use karna hai...
      printf("%d ", j);
    }
    printf("\n");
  }
}