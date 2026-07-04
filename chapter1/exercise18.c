#include <stdio.h>

int main()
{
    char array[100][100];

    int c;
    int arrayCount = 0;

    while (1) {
        char temp[100];
        int index = 0;
        int lastCharIndex = -1;

        while ((c = getchar()) != '\n' && c != '#') {
            temp[index] = c;

            if (c != ' ' && c != '\t') {
                lastCharIndex = index;
            }

            index++;
        }

        if (lastCharIndex >= 0) {
            for (int i = 0; i <= lastCharIndex; i++) {
                array[arrayCount][i] = temp[i];
            }

            array[arrayCount][lastCharIndex + 1] = '\0';
            arrayCount++;
        }

        if (c == '#') {
            break;
        }
    }

    for (int i = 0; i < arrayCount; i++) {
        printf("%s\n", array[i]);
    }

    return 0;
}
