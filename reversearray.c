// #include<stdio.h>
// int main()
// {
//     int a[26],i;
//     printf("enter array elements:");
//     for(i=0;i<=4;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("\n reverse array elements:");
//     for(i=4;i>=0;i--)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int matrix[3][3];  // Declare a 3x3 matrix
    int i, j;

    // Writing to the matrix
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matrix[i][j] = i * j;  // Assign values based on the product of indices
        }
    }

    // Reading from the matrix
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }

    return 0;
}
