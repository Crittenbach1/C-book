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

void itoa(int n, char s[], int minFieldWidth) {
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
    
    if (strlen(s) < minFieldWidth) {
        int emptySpaces = minFieldWidth - strlen(s);
       // printf("%d\n", emptySpaces);
        
        char copy[100];
        int k = 0;
        while (s[k] != '\0') {
            copy[k] = s[k];
            k++;
        }
        copy[k] = '\0';
        
        //printf("%s\n",copy);   
        
        for (k = 0; k < emptySpaces; k++) {
            s[k] = ' ';
        }
        
        int j = 0;
        while (copy[j] != '\0') {
            s[k++] = copy[j++];
        }
        s[k] = '\0';
        
        
       // printf("%s\n", s);   
    }
    
    
}



int main()
{
    char s[100];
    int n = -2147483648; // this prints -( because of this line: n = -n;
                         // there is no positive INT_MAX = 2147483648 causing overflow
                         // fix the issue by using a larger type in itoa
    
    itoa(n, s, 20);
    
    int i = 0;
    
    while (s[i] != '\0') {
        printf("%c", s[i++]);
    }
    

    return 0;
}
