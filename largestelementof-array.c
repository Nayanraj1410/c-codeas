#include <stdio.h>

// Function to find the largest element in an array
int find_largest(int array[], int size) {
    int largest = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }
    return largest;
}

int main() {
    int array[] = {1, 23, 17, 4, 100, 54, 3};
    int size = sizeof(array) / sizeof(array[0]);

    int largest = find_largest(array, size);
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
