#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    // Get user input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count characters manually
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Print length
    printf("Length of the string: %d\n", length);

    return 0;
}

