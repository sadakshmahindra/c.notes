#include <stdio.h>

int main() {
  int n, m;

  printf("enter the no of rows here: ");
  scanf("%d", &n);
  
  printf("enter the no of columns here: ");
  scanf("%d", &m);

  for(int i = 1; i <= n; i++) {
    for(int j = 1;j <= m; j++) {
      if(i == 1 || i == n || j == 1 || j == n) printf("*");
      else printf(" ");
    }
    printf("\n");
  }
  return 0;
}

//✅OR (||) is used because you want to print a star at any of the boundary positions, not all at once.
//✅AND (&&) would only work if you wanted to check for multiple conditions being true simultaneously, which isn’t needed in this case.