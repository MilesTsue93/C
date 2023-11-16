#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    char c;                 // range of ASCII values from 0 -> mystery values (?)
    int i;                  // can run the gamut from short -> long (signed by default)
    short s;                // -32768 -> +32767 (signed by default)
    long l;                 // -9223372036854775808 -> +9223372036854775807
    signed short ss;        // -32768 -> +32767
    unsigned short uss;     // 0 -> +65535
    signed long sl;         // same as long (signed by default)
    unsigned long usl;      // 0 -> 18446744073709551615

    usl = ULONG_MAX; 
    printf("%lu\n", usl);
    printf("%lu\n", usl + 1);
    return 0;
}