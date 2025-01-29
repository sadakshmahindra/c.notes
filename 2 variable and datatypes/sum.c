#include <stdio.h>

int main() { 
    int num1, num2, sum; 
   
    printf("Welcome to the sum calculator\n");

    printf("Please enter the first number: ");

    scanf("%d", &num1);
    
    printf("Please enter the second number: ");

    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum of the two numbers is: %d\n", sum);
    return 0;
}