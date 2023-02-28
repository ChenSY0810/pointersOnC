#include <stdio.h>

int main (){
    char c;
    int i, n = 0;
    
    while ((c = getchar()) != '\n'){
        if (c == '{') ++n;
        else if (c == '}') --n;

        if (n < 0) {
            printf("error\n");
            break;
        }
    }
    if (c == '\n'){
        if (n > 0) printf("error\n");
        else if (!n) printf("correct\n");
    }
    return 0;
}
