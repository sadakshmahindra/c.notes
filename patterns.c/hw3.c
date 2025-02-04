#include <stdio.h>

int main() {
  int n;

  printf("enter the no of rows here: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++) {
    char a = 65;
    for(int j = 1; j <= i; j++) {
      printf(" %c ", a);
        a++;  //✅ Use a++ inside the inner loop if you want it to increase
              //with every printed number.     
              //✅ Use a++ outside the inner loop if you want it to change only after a full row is printed.
    }
    printf("\n");
  } 
}