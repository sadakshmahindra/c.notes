#include<stdio.h>

int main() {
  int n;

  printf("enter the no of rows here: ");
  scanf("%d", &n);
  // method 3
  int a = n;
  for(int i = 1; i <= n; i++) {
    for(int j = 1 ; j <= a; j++) {
      printf("*");
    }
    a--;
    printf("\n");
  }
}

// method -1(not sure right but still getting pattern)
// i+j = n +1;                          
// j = n+1-i                                   
 //for(int i = 1; i <= n; i++) 
 //for(int j = n ; j >= i; j--) 
//    i            j
 //|  1   * * * *  4
 //|  2   * * *    3
 //|  3   * *      2
 //|  4   *        1
//  if n = 4

// method 2
 // for(int i = 1; i <= n; i++) {
 //    for(int j = 1 ; j <= n +1-i; j++)