//Reverse a string.

#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

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

    // Reverse the string
    for (i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}