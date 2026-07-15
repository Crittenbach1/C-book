
#include <stdio.h>
#include <string.h>

int strrindex(char t[], char s[]) {
    int tlength = strlen(t);
    int sLength = strlen(s);

    int occurIndex = -1;
  
    for (int i = 0; i <= sLength - tlength; i++) {
        int match = 1;
        for (int k = 0; k < tlength; k++) {
            if (s[i + k] != t[k]) {
                match = 0;
                break;
            }
        }
        if (match) {
            occurIndex = i;
        }
        
    }
    return occurIndex;
}


int main()
{
    char c[] = "cdfg";

    char s[] = "abacdefgacdfg";
    
    printf("%d", strrindex(c, s));
    
    return 0;
}
