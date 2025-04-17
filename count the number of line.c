#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char str[200];
    char *word;
    int a_count = 0, an_count = 0, the_count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    toLowerCase(str);

    word = strtok(str, " .,\n"); // tokenize using space, period, comma, newline
    while (word != NULL) {
        if (strcmp(word, "a") == 0)
            a_count++;
        else if (strcmp(word, "an") == 0)
            an_count++;
        else if (strcmp(word, "the") == 0)
            the_count++;

        word = strtok(NULL, " .,\n");
    }

    printf("\nAnalysis of the given input:\n");
    printf("A   - %d\n", a_count);
    printf("An  - %d\n", an_count);
    printf("The - %d\n", the_count);

    return 0;
}
