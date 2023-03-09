#include <stdio.h>
void copy_n (char dst[], char src[], int n);

int main (){
    char a[] = "I am a man,";
    char b[] = "not a woman";
    copy_n (b, a, 5);
    printf("%s", b);
    return 0;
}

void copy_n (char dst[], char src[], int n){
    
    for (int i =0, a = 0;i < n; ++i, src[a]? ++a: a){
        if (i != a){
            dst[i] = '\0';
        }else{
            dst[i] = src[i];
        }
    }
}