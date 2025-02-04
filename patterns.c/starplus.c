#include <stdio.h>

int main() {
  int n; 

  printf("enter the no rows here: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      int a = n / 2 + 1;
      if (j == a || i == a) {
        printf("*");
      } else{
        printf(" ");
      }
    }
    printf("\n");
  }
}


//✅ Why is a = n / 2 + 1 used?
//This formula helps find the center of the grid, so the program can print stars in the middle row and column, forming a cross pattern.

//✅ What does the program do?
//The program prints a cross pattern by placing stars in the center row and column of the grid. For odd numbers, it perfectly centers the cross, while for even numbers, it places the stars near the middle.

//✅ This approach ensures the pattern always looks centered, with stars at the intersection of the middle row and column.







