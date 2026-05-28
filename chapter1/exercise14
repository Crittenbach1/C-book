#include <stdio.h>
#include <stdbool.h>

int main()
{
    int c, i;
    
    i = 0;
    
    bool found = false;
    
    
    char words[100][2];
    
    while ((c = getchar()) != '#') {
        found = false;
        int foundIndex = 0;
        for(int k = 0; k < i; k++) {
            if (words[k][0] == c) {
                found = true;
                foundIndex = k;
            }
        }
        if (found == true) {
            words[foundIndex][1] += 1;
        } else {
            words[i][0] = c;
            words[i][1] = 1;
            i++;
        }
    }
    
    for (int k = 0; k <= i; k++) {
        printf("%c  ", words[k][0]);
        printf("%d\n", words[k][1]);
    }
    
    

    return 0;
}
