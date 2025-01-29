#include <stdio.h>

int main() {
    int age;
    char is_indian;

    printf("welcome to ARTO.\n please enter your age: ");
    scanf("%d", &age);
    printf("are you an indian citizen? (y/n): ");
    scanf(" %c", &is_indian); 

    if (is_indian == 'y' && age >= 18 && age <= 70) { 
        printf("you are eligible for a license.\n");
    } else {
        printf("you are not eligible for a license.\n");
    }

    //  if (is_indian == 'y') {
    //     if (age < 18) {
    //         printf("you are not eligible for a license.\n");
    //     } else if (age > 70) {
    //         printf("you are senior and cannot apply anymore for a license.\n");
    //     } else {
    //         printf("you are eligible for a license.\n");
    //     }
    // } else {
    //     printf("only indian citizens can apply for a license.\n");
    // }

    printf("your age is: %d\n", age);
    return 0;
}