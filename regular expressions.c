#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isAStar(char *str) {
    for (int i = 0; str[i]; i++) {
        if (str[i] != 'a') return false;
    }
    return true;
}

bool isAStarBPlus(char *str) {
    int i = 0;
    while (str[i] == 'a') i++;
    if (str[i] != 'b') return false;
    while (str[i] == 'b') i++;
    return str[i] == '\0';
}

bool isABB(char *str) {
    return strcmp(str, "abb") == 0;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isAStar(str)) {
        printf("Accepted under a*\n");
    } else if (isAStarBPlus(str)) {
        printf("Accepted under a*b+\n");
    } else if (isABB(str)) {
        printf("Accepted under abb\n");
    } else {
        printf("String not accepted under any pattern.\n");
    }

    return 0;
}
