#include <stdio.h>

#define N 10
#define MAXLINE 1000

int main(void)
{
    int c;
    char line[MAXLINE];
    int i = 0;

    while ((c = getchar()) != '#') {
        line[i++] = c;

        if (c == '\n') {
            line[i] = '\0';

            int start = 0;

            while (start < i) {
                int end = start + N;
                int last_blank = -1;

                if (end >= i) {
                    printf("%s", &line[start]);
                    break;
                }

                for (int j = start; j < end; j++) {
                    if (line[j] == ' ' || line[j] == '\t') {
                        last_blank = j;
                    }
                }

                if (last_blank != -1) {
                    for (int j = start; j < last_blank; j++) {
                        putchar(line[j]);
                    }
                    putchar('\n');

                    start = last_blank + 1;
                } else {
                    for (int j = start; j < end; j++) {
                        putchar(line[j]);
                    }
                    putchar('\n');

                    start = end;
                }
            }

            i = 0;
        }
    }

    return 0;
}
