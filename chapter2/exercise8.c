
#include <stdio.h>

#define BITS sizeof(unsigned) * 8

unsigned rightrot(unsigned x, int n) {
    
    unsigned xmaskRight = ~(~0U << n);
    unsigned copy1 = (x & xmaskRight) << (BITS - n);
    
    unsigned copy2 = x >> n;
    
    return copy1 | copy2;
    
}

int main()
{
    unsigned x = 100;
    printf("%u\n", rightrot(x, 5));

    return 0;
}
