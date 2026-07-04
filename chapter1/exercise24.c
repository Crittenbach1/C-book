#include <stdio.h>
#include <stdbool.h>

int validEscape(int c)
{
    return c == 'n'  || c == 't'  || c == 'r' ||
           c == 'b'  || c == 'f'  || c == 'v' ||
           c == 'a'  || c == '\\' || c == '\'' ||
           c == '"'  || c == '?'  || c == '0';
}

int main(void)
{
    int openParen = 0;
    int openBracket = 0;
    int openBrace = 0;

    bool openSingleQuote = false;
    bool openDoubleQuote = false;
    bool openComment = false;

    bool badEscape = false;

    int c, prev = 0;

    while ((c = getchar()) != '#') {

        /* Check for start of comment */
        if (!openSingleQuote && !openDoubleQuote && !openComment) {
            if (prev == '/' && c == '*') {
                openComment = true;
                prev = 0;
                continue;
            }
        }

        /* Check for end of comment */
        if (openComment) {
            if (prev == '*' && c == '/') {
                openComment = false;
                prev = 0;
                continue;
            }

            prev = c;
            continue;
        }

        /* Escape sequences inside double quotes */
        if (openDoubleQuote && c == '\\') {
            int next = getchar();

            if (!validEscape(next)) {
                badEscape = true;
            }

            prev = 0;
            continue;
        }

        /* Escape sequences inside single quotes */
        if (openSingleQuote && c == '\\') {
            int next = getchar();

            if (!validEscape(next)) {
                badEscape = true;
            }

            prev = 0;
            continue;
        }

        /* Quote handling */
        if (!openDoubleQuote && c == '\'') {
            openSingleQuote = !openSingleQuote;
            prev = c;
            continue;
        }

        if (!openSingleQuote && c == '"') {
            openDoubleQuote = !openDoubleQuote;
            prev = c;
            continue;
        }

        /* Ignore symbols inside quotes */
        if (!openSingleQuote && !openDoubleQuote) {
            if (c == '(') openParen++;
            if (c == ')') openParen--;

            if (c == '[') openBracket++;
            if (c == ']') openBracket--;

            if (c == '{') openBrace++;
            if (c == '}') openBrace--;
        }

        prev = c;
    }

    if (openParen != 0) {
        printf("unbalanced parentheses\n");
    }

    if (openBracket != 0) {
        printf("unbalanced brackets\n");
    }

    if (openBrace != 0) {
        printf("unbalanced braces\n");
    }

    if (openSingleQuote) {
        printf("unbalanced single quotes\n");
    }

    if (openDoubleQuote) {
        printf("unbalanced double quotes\n");
    }

    if (openComment) {
        printf("unbalanced comment\n");
    }

    if (badEscape) {
        printf("invalid escape sequence\n");
    }

    return 0;
}
