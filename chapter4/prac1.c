#include <stdio.h>
float Mysqrt(int n){
    float a = 0 ,b = 1;
    while (a != b){
        a = b;
        b = (a + n/a) * 0.5;
    }
    return a;
}

int main (){
    printf("%f", Mysqrt(2));
    return 0;
}

