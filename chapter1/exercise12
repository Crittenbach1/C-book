
#include <stdio.h>


int main()
{
    int c, i;
    
    i = 0;
    
    
    char words[100];
    
    while ((c = getchar()) != '#') {
        if (c != ' ' && c != '\n' && c != '\t') {
            words[i] = c;
            i++;
        } else {
            words[i] = '\0';
            i++;
        }
    }
    
    for (int k = 0; k <= i; k++) {
        if (words[k] != '\0') {
            printf("%c", words[k]);
        } else {
            printf("\n");
            while(words[k] == '\0') {
                k++;
            }
            k--;
        }
    }
    
    

    return 0;
}
