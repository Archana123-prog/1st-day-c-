#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_special_char(char ch) {
    // Define the characters you want to remove
    char special_chars[] = "!@#$%^&*()_+-=[]{}`~|:;\"'<>,.?/";
    
    for (int i = 0; special_chars[i] != '\0'; i++) {
        if (ch == special_chars[i]) {
            return 1; // It's a special character to be removed
        }
    }
    return 0; // Not a special character
}

void remove_special_characters(char *input, char *result) {
    int i = 0, j = 0;
    while (input[i] != '\0') {
        if (!is_special_char(input[i])) {
            result[j++] = input[i];
        }
        i++;
    }
    result[j] = '\0'; // Null-terminate the result
}

int main() {
    char input[1000];
    char result[1000];

    // Get the main string from user
    printf("Enter the main string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove trailing newline

    // Remove special characters
    remove_special_characters(input, result);

    // Print result
    printf("Cleaned string: %s\n", result);

    return 0;
}