#include <stdio.h>
#include <stdbool.h>
//C is passing the address of the first character (char &s1[0], char &s2[0])
//this also works the same: (char *s1, char *s2)
void squeeze(char s1[], char s2[]) {
    int i = 0;
    
    /*
    while (s1[i] != '\0') {
        i++;
    }
    char new[i + 1];
    
    int newCount = 0;
    
    
    for (int j = 0; j < i; j++) {
        char current = s1[j];
        
        bool found = false;
        
        int k = 0;
        while (s2[k] != '\0') {
            if (s2[k] == current) {
                found = true;
                break;
            }
            k++;
        }
        if (found == false) {
            new[newCount] = s1[j];
            //printf("%c", new[newCount]);
            newCount++;
        }
    }
    new[newCount] = '\0';
    
    i = 0;
    while (new[i] != '\0') {
        s1[i] = new[i];
        i++;
    }
    s1[i] = '\0';
    
    */
    int r = 0;
    int w = 0;
    bool found = false;
    while (s1[r] != '\0') {
        int i = 0;
        found = false;
        while (s2[i] != '\0') {
            if (s1[r] == s2[i]) {
                found = true;
                break;
            }
            i++;
        }
        if (found == false) {
            s1[w] = s1[r];
            w++;
        }
        r++;
    }
    s1[w] = '\0';
}

int main()
{
    char string1[] = "hellothere";
    char string2[] = "thisisatest";
    
    squeeze(string1, string2);
    
    int i = 0;
    while (string1[i] != '\0') {
        printf("%c", string1[i]);
        i++;
    }
    

    return 0;
}
