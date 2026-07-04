
#include <stdio.h>
#include <stdbool.h>

bool isInt(char c) {
    return (c >= '0' && c <= '9');
}

bool lowerC(char c) {
    return (c >= 'a' && c <= 'z');

}

bool upperC(char c) {
    return (c >= 'A' && c <= 'Z');
}

int checkForValid(char c[]) {
    if (isInt(c[0]) && (c[1] == '-') && isInt(c[2]) &&  c[0] <= c[2]) {
        return 1;
    }
    
    if (lowerC(c[0]) && (c[1] == '-') && lowerC(c[2]) &&  c[0] <= c[2]) {
        return 2;
    }
    
    if (upperC(c[0]) && (c[1] == '-') && upperC(c[2]) &&  c[0] <= c[2]) {
        return 3;
    }
    
    return 0;
}

void expand(char s1[], char s2[]) {
    int i = 0;
    int j = 0;
    char nextThree[3];
    
    while (s1[i] != '\0') {
    
        nextThree[0] = s1[i];
        nextThree[1] = s1[i + 1];
        nextThree[2] = s1[i + 2];
        
        switch (checkForValid(nextThree)) {
            case (0):
                //printf("%c", s1[i]);
                s2[j++] = s1[i++];
                break;
            case (1):
            case (2):
            case (3):
                for (char c = s1[i]; c <= s1[i + 2]; c++) {
                    s2[j++] = c;
                }
                i = i + 3;
                break;
        }
  }
    s2[j] = '\0';
    
}

int main()
{
    char s1[] = "-c-a-A-D-0-4-----";
    char s2[100];
    
    expand(s1, s2);
    
    int k = 0;
    while (s2[k] != '\0') {
        printf("%c", s2[k++]);
    }
    return 0;
}
