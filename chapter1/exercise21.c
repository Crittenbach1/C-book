
#include <stdio.h>

#define TAB 8

int main() {
    int c;
    
    char input[1000];
    int i = 0;
    int spaces = 0;
    int blanks = 0;
    int tabs = 0;
    while ((c = getchar()) != '#') {
        
        if (c == ' ') {
            spaces++;
            while ((c = getchar()) == ' '){
               spaces++; 
            }
            tabs = spaces / TAB;
            blanks = spaces % TAB;
            
            for (int s = 0; s < tabs; s++) {
                input[i] = '\t';
                i++;
            }
            for (int s = 0; s < blanks; s++) {
                input[i] = ' ';
                i++;
            }
            
            spaces = blanks = tabs = 0;
            
            if (c == '#') {
                break;
            }

            input[i++] = c;
    
        } else {
           input[i] = c; 
           i++;
        }
        
    }
    
    for (int k = 0; k < i; k++) {
        printf("%c", input[k]);
    }
    
    
    
    return 0;
}
