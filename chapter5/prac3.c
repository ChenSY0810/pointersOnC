#include <stdio.h>

unsigned int reverse_bits(unsigned value){
    int i = 0, len = sizeof(unsigned) * 8;
    unsigned res = 0;
    while (value){
        if (value & 1){
            res += (1 << (len - 1 - i));
        }
        value >> 1;
        ++i;
    } 
    return res;
}