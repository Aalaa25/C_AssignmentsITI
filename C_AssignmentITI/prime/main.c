#include <stdio.h>

int main() {
    int number;
    int prime = 1;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 2) {
        prime = 0;
    } else {
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                prime = 0;

            }
        }
    }

    if (prime) {
        printf("This is a prime number.\n");
    } else {
        printf("This is not a prime number.\n");
    }

    return 0;
}
