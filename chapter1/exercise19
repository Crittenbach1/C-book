#include <stdio.h>
#include <string.h>

char *reverse(char s[], int len) {
    
    char revS[len + 1];
    
    for (int i = 0; i <= len; i++) {
        revS[i] = s[len - 1 - i];
    }
    
    revS[len] = '\0';
    
    for (int i = 0; i <= len; i++) {
        s[i] = revS[i];
    }
    
    return s;
}


int main()
{

   int c;
 
  
   while (1) {
       
       char str[100];
       int i = 0;
       
       while ((c = getchar()) != '\n') {
           str[i] = c;
           i++;
       }
       char *reverseStr = reverse(str, i);
       printf("%s\n", reverseStr);
       
       if (c == '#') {
           break;
       }
       
   }
   
    
    
    
    return 0;
}
