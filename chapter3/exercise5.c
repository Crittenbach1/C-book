#include <stdio.h>
#include <string.h>

void reverse(char s[]) {
    int c, i, j;
    
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}



void itob(int n, char s[], int b) {
    int i, sign;
    long num = n;
    int digit;
    
    if (b < 2 || b > 36) {
        printf("Enter a valid base (2-36).\n");
        s[0] = '\0';
        return;
    }
    
    if ((sign = n) < 0) {
        num = -num;  
    }
            
    i = 0;
            
    do { 
        digit = num % b;
        if (digit < 10) {
            s[i++] = digit + '0';
        } else {
            s[i++] = digit - 10 + 'A';
        }
        
    } while ((num /= b) > 0); 
            
    if (sign < 0) {
        s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
        
 
}

int main()
{
    int n = 45453;
    char s[100];
    
    
    itob(n, s , 2);
    
    int i = 0;
    
    printf("%s\n", s);

    return 0;
}
