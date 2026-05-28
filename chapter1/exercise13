#include <stdio.h>

int main()
{
    int c, i, j;

    i = 0;
    j = 0;

    char words[100][100];

    while ((c = getchar()) != '#') {

        if (c != ' ' && c != '\n' && c != '\t'  && c != '#') {

            while (c != ' ' && c != '\n' && c != '\t' && c != '#') {
                words[i][j] = c;
                j++;

                c = getchar();
            }

            words[i][j] = '\0';
            i++;
            j = 0;
        }
    }

    for (int k = 0; k < i; k++) {
        printf("%s ", words[k]);
         int count = 0;

        while (words[k][count] != '\0') {
            count++;
        }
        printf("%d\n", count);
        

    }

    return 0;
}
