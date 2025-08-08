#include <stdio.h>

int main() {
    int n, i = 1, sum_of_squares = 0;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Use while loop to compute the sum of squares
    while (i <= n) 
    {
        sum_of_squares += i * i;
       
        i++;
    }

    // Print the result
    printf("The sum of squares of the first %d numbers is: %d\n", n, sum_of_squares);

    return 0;
}
