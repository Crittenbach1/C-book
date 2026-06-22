
#include <stdio.h>
#include <stdbool.h>

int any(char s1[], char s2[]) {
    int i = 0;
    
    bool found = false;
    
    while (s1[i] != '\0') {
        int j = 0;
        while (s2[j] != '\0') {
            if (s1[i] == s2[j]) {
                found = true;
                return i;
            }
            j++;
        }
        i++;
    }
    
    
    return -1;
    
    
}

int main()
{
    char string1[] = "1234hellothere";
    char string2[] = "thisisatest";
    
    printf("%d", any(string1, string2));

    return 0;
}
