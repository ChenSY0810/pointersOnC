#include <stdio.h>
void convert(char* i){
    
    if (*i >= 'a' && *i <= 'z'){
        if (*i + 13 > 'Z') *i += 13;
        else *i -= 13;
    }else if (*i >= 'A' && *i <= 'Z'){
        if (*i + 13 > 'Z') *i += 13;
        else *i -= 13;
    }else {
        return;
    }
}

int main (){
    char c = 'a';
    convert(&c);
    printf("%c", c);
    return 0;
}