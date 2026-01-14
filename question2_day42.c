//Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;
    int isPalindrome = 1; // Assume it is a palindrome

    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }
    // Adjust length to exclude the newline character if present
    if (length > 0 && str[length - 1] == '\n') {
        length--;
    }

    // Check for palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}