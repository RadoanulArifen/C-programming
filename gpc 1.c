#include <stdio.h>
#include <string.h>
#include <ctype.h>
int countWords(const char *str)
{
    int count = 0;
    int isWord = 0;
    while (*str)
    {
        if (isalnum(*str))
        {
            if (!isWord)
            {
                isWord = 1;
                count++;
            }
        }
        else
        {
            isWord = 0;
        }
        str++;
    }
    return count;
}
int main()
{
    char text[1000];
    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);
    if (text[strlen(text) - 1] == '\n')
        text[strlen(text) - 1] = '\0';

    printf("Number of words: %d\n", countWords(text));

    return 0;
}
