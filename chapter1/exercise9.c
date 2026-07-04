#include <stdio.h>
#include <stdbool.h>

int main()
{
    
    int c, nl;
    
    bool blank = false;
    
    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            blank = false;
            printf("%c", c);
        } else {
            if (blank != true) {
                printf("%c", c);
            }
            blank = true;
        }
        
    }
    
    
    return 0;
}
