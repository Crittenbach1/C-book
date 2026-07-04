#include <stdio.h>

/*
void printBits(unsigned x) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (x >> i) & 1);

        if (i % 8 == 0)
            printf(" ");
    }
    printf("\n");
}
*/

int invert(int x, int p, int n) {
    
    unsigned xmask = ~(~0U << n) << ((p + 1) - n);
    return x ^ xmask;

}
    
   

int main()
{
    int x = 2042442;
    int p = 15;
    int n = 8;
    
    
    printf("%d", invert(x, p, n)); 
    

    return 0;
}
