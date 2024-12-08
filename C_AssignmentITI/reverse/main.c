#include <stdio.h>

int main() {
    int num, reversedNumber;


    printf("Enter a number ");
    scanf("%d", &num);

    printf("Reversed number ");
    while (num > 0) {
        reversedNumber = num % 10;
        printf("%d", reversedNumber);
        num = num / 10;
    }

    return 0;
}
