// #include <stdio.h>
// #include <string.h>

// void reverseString(char* str) {
//     int length = strlen(str);
//     char* start = str;
//     char* end = str + length - 1;
//     char temp;

//     while (end > start) {
//         temp = *start;
//         *start = *end;
//         *end = temp;
//         start++;
//         end--;
//     }
// }

// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     gets(str); // Use fgets(str, sizeof(str), stdin) in modern C programs to avoid potential buffer overflow
//     reverseString(str);
//     printf("Reversed string: %s\n", str);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str); // Use fgets(str, sizeof(str), stdin) in modern C programs to avoid potential buffer overflow

    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1;
    char temp;

    while (end > start) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}

