#include <limits.h>
#include <stdio.h>
#include <math.h>

#define sizeOfChar (sizeof(char) * CHAR_BIT)
#define sizeOfShort (sizeof(short) * CHAR_BIT)
#define sizeOfInt (sizeof(int) * CHAR_BIT)
#define sizeOfLong (sizeof(long) * CHAR_BIT)

int main()
{
    //char: 1 byte 
    //short: 2 bytes
    //int: 4 bytes 
    //long: 8 bytes 
    
    // n = bits
    
    //unsigned types------------------
    // minimum: 0 , maximum: 2^n - 1
    //signed types -------------------
    // minimum: -2^(n-1), maximum: (2^(n-1))-1 
    
    unsigned char c = 0;
    printf("%s\n", "print the range of unsigned char");
    c++;
    while ((unsigned char)(c + 1) != 0) {
        c++;
    }
    printf("\n%s %u", "max found before overflow:", c);
    printf("\n%s %d", "minimum:", 0);
    printf("\n%s %.0f\n", "maximum:", (pow(2,sizeOfChar) - 1));
    
    unsigned short s = 0;
    printf("\n%s\n", "print the range of unsigned short");
    s++;
    while ((unsigned short)(s + 1) != 0) {
        s++;
    }
    printf("\n%s %u", "max found before overflow:", s);
    printf("\n%s %d", "minimum:", 0);
    printf("\n%s %.0f\n", "maximum:", (pow(2,sizeOfShort) - 1));
    
    
    
    unsigned int i = 0;
    printf("\n%s\n", "print the range of unsigned int");
    i++;
    while ((unsigned int)(i + 1) != 0) {
        i++;
    }
    printf("\n%s %u", "max found before overflow:", i);
    printf("\n%s %d", "minimum:", 0);
    printf("\n%s %.0f", "maximum:", (pow(2,sizeOfInt) - 1));
    
    unsigned long l = ~0UL;
    printf("\n\n%s\n", "print the range of unsigned long");
    printf("\n%s %d", "minimum:", 0);
    printf("\n%s %lu", "max found of flipped bits:", l);

    printf("\n%s", "-----------------------------------------------");
    
    
    printf("\n%s\n", "print the range of signed char");
    
    printf("\n%s %.0f", "minimum: ", -pow(2,sizeOfChar - 1));
    printf("\n%s %.0f", "maximum: ", pow(2, (sizeOfChar - 1)) - 1);
    
    printf("\n\n%s\n", "print the range of signed short");
    
    printf("\n%s %.0f", "minimum: ", -pow(2,sizeOfShort - 1));
    printf("\n%s %.0f", "maximum: ", pow(2, (sizeOfShort - 1)) - 1);
    
    printf("\n\n%s\n", "print the range of signed int");
    
    printf("\n%s %.0f", "minimum: ", -pow(2,sizeOfInt - 1));
    printf("\n%s %.0f", "maximum: ", pow(2, (sizeOfInt - 1)) - 1);
    
    printf("\n\n%s\n", "print the range of signed long");
    
    printf("\n%s %.0f", "minimum: ", -pow(2,sizeOfLong - 1));
    printf("\n%s %.0f", "maximum: ", pow(2, (sizeOfLong - 1)) - 1);
    
    

    return 0;
    
}
