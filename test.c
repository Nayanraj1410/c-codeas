//  #include <stdio.h>
// int main() {
//     int x = 15;
//     x = 15; // This line has no effect, x is already 15
//     printf("\n%d%d%d", x != 15, x = 20, x < 30);
//     return 0; // Good practice to include a return statement
// }
#include <stdio.h>

int main() {
    int x = 15; // Initialize x to 15
    x = 15; // This line has no effect, x is already 15
    // Print the results of the three expressions
    printf("\n%d%d%d", x != 15, x = 20, x < 30); // Outputs: 0 20 1
    return 0; // Good practice to include a return statement
}