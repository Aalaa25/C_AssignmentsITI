#include <stdio.h>
#define rows 3
#define columns 4

int main() {
    int arr[rows][columns];
    int sum[rows];
    printf("Enter 4 grades for each of the 3 students:\n");

    int i, j;

    for(i = 0; i < rows; i++) {
        sum[i] = 0;
    }

    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    printf("The grades are:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            sum[i] += arr[i][j];
        }
    }

    printf("The summation of grades for each student is:\n");
    for(i = 0; i < rows; i++) {
        printf("Summation of grades for student %d: %d\n", i + 1, sum[i]);
    }

    return 0;
}
