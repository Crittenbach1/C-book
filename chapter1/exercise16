#include <stdio.h>

#define MAXLINE 10 /* maximum input line size */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */

int main()
{
    int len;
    int max;

    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;

    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) {
        printf("%d\n", max);
        printf("%s", longest);
    }

    return 0;
}

int get_line(char s[], int lim)
{
    int c, i, len;

    i = 0;
    len = 0;

    while ((c = getchar()) != '#' && c != '\n') {

        if (i < lim - 1) {
            s[i] = c;
            i++;
        }

        len++;
    }

    if (c == '\n') {

        if (i < lim - 1) {
            s[i] = c;
            i++;
        }

        len++;
    }

    s[i] = '\0';

    return len;
}

void copy(char to[], char from[])
{
    int i = 0;

    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
