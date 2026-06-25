
#include <stdio.h>

int setbits(int x, int p, int n, int y) {
    
    unsigned ymask = ~0U >> (32 - n);
    y = (y & ymask) << ((p + 1) - n);
    
    // ymask:
    // 00000000 00000000 00000000 11111111
    // y-original
    // 00101010 01101101 10100101 10101101
    // 00000000 00000000 00000000 10101101
    // shift to p
    // 00000000 00000000 10101101 00000000
    
    // x mask
    // 1111111 11111111 11111111 11111111
    // 1111111 11111111 11111111 00000000
    // bitwiseNOT
    // 0000000 00000000 00000000 11111111
    // shift
    //00000000 00000000 11111111 00000000
    // flip 
    //11111111 11111111 00000000 11111111
    
    unsigned xmask = ~(ymask << ((p + 1) - n));
    x = x & xmask;
    
    // OR x and y 
    
    x = x | y;
    
    return x;
}

int main()
{
    int x = 6;
    int p = 3;
    int n = 4;
    int y = 40;
    
    printf("%d", setbits(x, p, n, y)); 
    

    return 0;
}
