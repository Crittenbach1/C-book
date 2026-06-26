
#include <stdio.h>

void printBits(unsigned x) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (x >> i) & 1);

        if (i % 8 == 0)
            printf(" ");
    }
    printf("\n");
}

int bitCount(unsigned x) {
    printBits(x);
    
    int b;
    
    for (b = 0; x != 0; x &= (x - 1)) { // Count the number of 1 bits by repeatedly removing the rightmost 1 bit
        b++;
    }
     // removes the right most 1 bit
    
    //ex:
    // x = 00001010  (10)
    // x - 1 = 00001001  (9) --- rightmost 1 turns to 0, the right turns to all 1's
    // x & (x-1) clears the rightmost 1 bit
    // AND    = 00001000   (8) --- not necessarily going to subtract 1 from the int 
    
    
    printBits(x);
    return b;
}

int main()
{
    
    unsigned x = 3214;
    printf("%d", bitCount(x));
    

    return 0;
}
