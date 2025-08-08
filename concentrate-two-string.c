#include <stdio.h>
#include <string.h>

// Function to concatenate two strings
void concatenate(char* result, const char* str1, const char* str2) {
    // Copy the first string to the result
    strcpy(result, str1);
    // Append the second string to the result
    strcat(result, str2);
}

int main() {
    char str1[] = "Hello, ";
    char str2[] = "World!";
    char result[100]; // Ensure the result array is large enough to hold both strings

    concatenate(result, str1, str2);
    printf("Concatenated String: %s\n", result);

    return 0;
}
