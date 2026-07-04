#include <stdio.h>

#define MAXLINE 10

int main()
{
    int c;
    int currentLineLength = 0;
    char currentLine[1000];

    while ((c = getchar()) != '#') {

        currentLine[currentLineLength] = c;
        currentLineLength++;

        if (c == '\n') {
            if (currentLineLength > MAXLINE) {
                for (int i = 0; i < currentLineLength; i++) {
                    printf("%c", currentLine[i]);
                }
            }

            currentLineLength = 0;
        }
    }

    if (currentLineLength > MAXLINE) {
        for (int i = 0; i < currentLineLength; i++) {
            printf("%c", currentLine[i]);
        }
    }

    return 0;
}
