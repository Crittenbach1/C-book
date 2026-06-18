#include <stdio.h>
#include <string.h>
#include <math.h>

int htoi(char s[]) {
    int i = 0;
    int digit = 0;
    //int len = strlen(s) - 1;
    int total = 0;
    while (s[i] != '\0') {
        
        
        if (s[i] >= '0' && s[i] <= '9') {
            digit = s[i] - '0';
        } else if (s[i] >= 'A' && s[i] <= 'F') {
            digit = s[i] - 'A' + 10;
        } else if (s[i] >= 'a' && s[i] <= 'f') {
            digit = s[i] - 'a' + 10;
        }
        
       // total += (digit * 16 + len);
        total = total * 16 + digit;

        
        //len--;
        i++;
    }
    
    return total;
}


int main() {
    char hexStr[] = "12F";
    
    int ans = htoi(hexStr);

    printf("%d", ans);


    return 0;
    
}
