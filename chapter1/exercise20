#include <stdio.h>

#define TAB 8

int main() {
    int c;
    
    char input[1000];
    int i = 0;
    int columns = 0;
    while ((c = getchar()) != '#') {
        
        if (c == '\t') {
            int spaces = TAB - (columns % TAB);
            for (int j = 0; j < spaces; j++) {
                input[i] = ' ';
                i++;
            }
            columns += spaces;
        } else {
            input[i] = c;
            i++;
            
            if (c == '\n') {
            columns = 0;
            } else {
                columns++;
            }
        
        }
        
    }
    
    for (int k = 0; k < i; k++) {
        printf("%c", input[k]);
    }
    
    
    
    return 0;
}
