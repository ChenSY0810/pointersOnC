#include <stdio.h>
//easiest one
void prime(int n){
    int flag = 0;
    if (n < 2) return;
    else printf("2\n");
    for (int i = 3; i <= n; ++i){
        for (int j = 2; j < i; ++j){
            if (i%j == 0){
                flag = 1;
                break;
            }
        }
        if (!flag) {
            printf("%d\n",i);
        }
        flag = 0;
    }
}

int main (){
    prime(100);
    return 0;
}