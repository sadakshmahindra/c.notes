#include <stdio.h>

int main() {
    int n;
    
    printf("Please enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print spaces for right alignment
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Print characters from A onward
        char A = 65;  // Reset 'a' to 'A' for each row
        for (int k = 1; k <= i; k++) {
            printf("%c", A);
            A++;  // Move to next letter
        }
        
        printf("\n");
    }

    return 0;
}
