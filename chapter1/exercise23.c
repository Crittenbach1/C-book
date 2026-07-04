#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool quote = false;
    char array[10000];
    int i = 0;

    int c;

    while ((c = getchar()) != '#') {

        if (c == '"' || c == '\'') {
            quote = !quote;
            array[i++] = c;
        }

        else if (c == '/' && quote == false) {
            int next = getchar();

            if (next == '/') {
                while ((c = getchar()) != '\n' && c != '#')
                    ;

                if (c == '\n')
                    array[i++] = '\n';
                else
                    break;
            }

            else if (next == '*') {
                int prev = 0;

                while ((c = getchar()) != EOF) {
                    if (prev == '*' && c == '/')
                        break;
                    prev = c;
                }
            }

            else {
                array[i++] = '/';

                if (next == '#')
                    break;

                array[i++] = next;
            }
        }

        else {
            array[i++] = c;
        }
    }

    for (int j = 0; j < i; j++) {
        putchar(array[j]);
    }

    return 0;
}
