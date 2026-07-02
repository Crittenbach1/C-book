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

void itoa(int n, char s[]) {
    int i, sign;
    long num = n;
    
    if ((sign = n) < 0) { // record sign
        num = -num; // make n positive 
    }
    
    i = 0;
    
    do { // generate digits in reverse order
        s[i++] = num % 10 + '0'; // get next digit
    } while ((num /= 10) > 0); // delete it
    
    if (sign < 0) {
        s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
}

int main()
{
    char s[100];
    int n = -2147483648; // this prints -( because of this line: n = -n;
                         // there is no positive INT_MAX = 2147483648 causing overflow
                         // fix the issue by using a larger type in itoa
    
    itoa(n, s);
    
    int i = 0;
    
    while (s[i] != '\0') {
        printf("%c", s[i++]);
    }
    

    return 0;
}
