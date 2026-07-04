#include <stdio.h>


int main()
{

    int lim = 10;
    char s[20];
    int c;
   /* 
    for (int i = 0; i < lim-1 && (c=getchar()) != '\n' && c != '#'; ++i) {
        s[i] = c;
    }
    
    
    
    */
    int i = 0;
    while (1) {
        
        
        if(i >= lim - 1) {
            break;
        }
        
        c = getchar();
        
        if (c == '\n') {
            break;
        }
        if (c == '#') {
            break;
        }
        
        s[i] = c;
        i++;
    }
    
    for (int j = 0; j < i; j++) {
        printf("%c", s[j]);
    }
    
    

    return 0;
    
}
