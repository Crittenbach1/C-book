
#include <stdio.h>

void escape(char s[], char t[]) {
    int i = 0;
    int j = 0;
    while (s[i] != '\0') {
        switch(s[i]) {
            case '\n':
                t[j++] = '\\';
                t[j++] = 'n';
                i++;
                break;
                
            case '\t':
                t[j++] = '\\';
                t[j++] = 't';
                i++;
                break;
                
            default:
                t[j++] = s[i++];
                break;
        }
        
        
    }
    
    t[j] = '\0';
    return;
}

void unescape(char s[], char t[]) {
    int i = 0;
    int j = 0;
    while (s[i] != '\0') {
        if (s[i] == '\\') {
            switch(s[i + 1]) {
                case 'n':
                    t[j++] = '\n';
                    i += 2;
                    break;
                    
                case 't':
                    t[j++] = '\t';
                    i += 2;
                    break;
                    
                default:
                    t[j++] = s[i++];
                    break;
            }
        } else {
            t[j++] = s[i++];
        }
        
        
    }
    
    t[j] = '\0';
    return;
}


int main()
{
    char s[] = "hello\thel\nlo";
    char t[100] = "12345\t67899999";
    
    char j[] = "hihihi\\nhi\\t";
    char p[100] = "byebyebye\nbyebyebye";
    
    escape(s,t);
    unescape(j,p);
    int i = 0;
    while (t[i] != '\0') {
        printf("%c", t[i++]);
    }
    printf("\n");
    i = 0;
    while (p[i] != '\0') {
        printf("%c", p[i++]);
    }
    return 0;
}
