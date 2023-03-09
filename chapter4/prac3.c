#include <stdio.h>

void tri(int a, int b, int c){
    if (a + b <= c || b + c <= a || a + c <= b){
        printf("并非欧氏几何的三角形");
        return;
    }
    if (a == b && b== c){
        printf("等边三角形");
    }else if (a == b || b == c || a == c){
        printf("等腰三角形");
    }else {
        printf("普通三角形");
    }
}

int main (){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    tri(a, b, c );
    return 0;
}