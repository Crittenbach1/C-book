
#include <stdio.h>

void lower(char s[]) {
    
    int i = 0;
    
    while (s[i] != '\0') {
        (s[i] >= 'A' && s[i] <= 'Z') ? (s[i] += ('a' - 'A'))
        : (s[i]);
        
        i++;
    }

    return;
}

int main()
{
    char s[] = "HELlo TheRe!!";
    lower(s);
    printf("%s", s);

    return 0;
}
