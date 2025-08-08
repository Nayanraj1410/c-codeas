#include <stdio.h>

// Function to find the frequency of a character in a string
int find_frequency(const char* str, char ch) {
    int count = 0;
    while (*str != '\0') {
        if (*str == ch) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[] = "Hello, World!";
    char ch = 'l';
    int frequency = find_frequency(str, ch);

    printf("The frequency of the character '%c' in the string \"%s\" is: %d\n", ch, str, frequency);

    return 0;
}

