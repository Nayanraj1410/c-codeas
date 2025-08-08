// // #include <stdio.h>

// // #define ROWS 3
// // #define COLS 3

// // int main() {
// //     int matrix1[ROWS][COLS], matrix2[ROWS][COLS], sum[ROWS][COLS];

// //     // Input for the first matrix
// //     printf("Enter elements of the first matrix:\n");
// //     for (int i = 0; i < ROWS; i++) 
// // 	{
// //         for (int j = 0; j < COLS; j++) {
// //             printf("Enter element [%d][%d]: ", i, j);
// //             scanf("%d", &matrix1[i][j]);
// //         }
// //     }

// //     // Input for the second matrix
// //     printf("Enter elements of the second matrix:\n");
// //     for (int i = 0; i < ROWS; i++) {
// //         for (int j = 0; j < COLS; j++) {
// //             printf("Enter element [%d][%d]: ", i, j);
// //             scanf("%d", &matrix2[i][j]);
// //         }
// //     }

// //     // Calculate the sum of the two matrices
// //     for (int i = 0; i < ROWS; i++) {
// //         for (int j = 0; j < COLS; j++) {
// //             sum[i][j] = matrix1[i][j] + matrix2[i][j];
// //         }
// //     }

// //     // Output the resulting sum matrix
// //     printf("Sum of the two matrices:\n");
// //     for (int i = 0; i < ROWS; i++) {
// //         for (int j = 0; j < COLS; j++) {
// //             printf("%d ", sum[i][j]);
// //         }
// //         printf("\n");
// //     }

// //     return 0;
// // }
// #include <stdio.h>

// #define SIZE 3

// int main() {
//     int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE], result[SIZE][SIZE];

//     // Input for the first matrix
//     printf("Enter elements of the first matrix:\n");
//     for (int i = 0; i < SIZE; i++) {
//         for (int j = 0; j < SIZE; j++) {
//             printf("Enter element [%d][%d]: ", i, j);
//             scanf("%d", &matrix1[i][j]);
//         }
//     }

//     // Input for the second matrix
//     printf("Enter elements of the second matrix:\n");
//     for (int i = 0; i< SIZE; i++) {
//         for (int j = 0; j < SIZE; j++) {
//             printf("Enter element [%d][%d]: ", i, j);
//             scanf("%d", &matrix2[i][j]);
//         }
//     }

//     // Multiply the matrices
//     for (int i = 0; i < SIZE; i++) {
//         for (int j = 0; j < SIZE; j++) {
//             result[i][j] = 0;
//             for (int k = 0; k < SIZE; k++) {
//                 result[i][j] += matrix1[i][k] * matrix2[k][j];
//             }
//         }
//     }

//     // Display the resulting matrix
//     printf("Resulting matrix:\n");
//     for (int i = 0; i < SIZE; i++) {
//         for (int j = 0; j < SIZE; j++) {
//             printf("%d ", result[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        sum += number % 10; // Add the last digit to sum
        number /= 10;       // Remove the last digit
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
