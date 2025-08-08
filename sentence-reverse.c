#include <stdio.h>
#include <string.h>

// Function to reverse a sentence using recursion
void reverse_sentence(char* sentence) {
    // Base case: if the sentence is empty or contains a single word
    if (*sentence == '\0' || strchr(sentence, ' ') == NULL) {
        printf("%s", sentence);
        return;
    }

    // Find the index of the first space
    char* space_index = strchr(sentence, ' ');

    // Recursively reverse the rest of the sentence
    reverse_sentence(space_index + 1);

    // Print the first word
    printf(" %.*s", (int)(space_index - sentence), sentence);
}

int main() {
    char sentence[] = "Hello World from Copilot";
    printf("Original Sentence: %s\n", sentence);
    printf("Reversed Sentence: ");
    reverse_sentence(sentence);
    printf("\n");
    return 0;
}
