#include <stdio.h>

int increment (int i){
    return ++i;
}
int negate (int i){
    return -i;
}


int main (){
    printf("%d %d\n", increment(10), negate(10));
    printf("%d %d\n", increment(0), negate(0));
    printf("%d %d\n", increment(-10), negate(-10));
    return 0;
}