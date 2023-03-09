#include <string.h>
int substr(char dst[], char src[], int start, int len){
    int i, l = strlen(src);
    for (i = 0; i < len && i + start < l; ++i){
        dst[i] = src[start + i];
    }
    dst[i] = '\0';
    return i+2;
}